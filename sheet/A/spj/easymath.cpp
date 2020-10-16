#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ar[4];

ll gcd(ll a, ll b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

ll lcm(ll a, ll b){
	return (a*b) / gcd(a, b);
}

ll go(int id, int cnt, ll me, ll upto){
	if(id == 5){
		if(cnt%2) return - me/upto;
		else return me/upto;
	}
	ll ret = 0;
	ret += go(id+1, cnt+1, me, lcm(upto, ar[id]));
	ret += go(id+1, cnt, me, upto);
	return ret;
}	
int main(){
	ll t; cin >> t;
	while(t--){
		ll n, m, a, d;
		cin >> n >> m >> a >> d;
		ar[0] = a;
		ar[1] = a + d;
		ar[2] = a + 2 * d;
		ar[3] = a + 3 * d;
		ar[4] = a + 4 * d;
		
		cout << go(0, 0, m, 1) - go(0, 0, n - 1, 1) << endl;	
	}
	return 0;
}

/*
int main(){
	int ans = 0;
	int t; cin >> t;
	while(t--){
		int n, m, a, d;
		cin >> n >> m >> a >> d;
		for(int i = n; i <= m; i++){
			if(n%a != 0 || n%(a+d) != 0 || n%(a+(2*d)) != 0 || n%(a+(3*d)) != 0 || n%(a+(4*d)) != 0){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}*/

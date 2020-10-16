#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		vector<int> g(n);
		ll sm = 0;
		for(int i = 0; i < n; i++){
			cin >> g[i];
			sm += g[i];
		}
		ll ans = k, day = 1;
		while(sm >= ans){
			ans += k;
			day++;
		}
		cout << day << endl;
	}	
		
		

	return 0;
}

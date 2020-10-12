#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, a;
	cin >> n;
	ll sm = 0;
	vector<ll> g(n);
	for(ll i = 0; i< n; i++){
		cin >> g[i];
		sm += g[i];
	}
	a = g.size() - 1;
	ll j = 0; 
	ll ans = 0;
	while(j < a){
		if(sm == 0){
			ans++;
			j++;
		}
		else{
			sm -= g[j];
			j++;
		}
	}
	cout << ans << endl;


	return 0;
}

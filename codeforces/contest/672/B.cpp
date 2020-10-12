#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t, n, a; 
	cin >> t;
	vector<ll> g;
	while(t--){
		cin >> n;
		for(ll i =0; i< n; i++){
			cin >> a;
			g.push_back(a);
		}
		ll ans = 0;
		sort(g.begin(), g.end());
		for(ll i =0; i < g.size() - 1; i++){
			ll an = g[i] & g[i+1];
			ll xo = g[i] ^ g[i+1];
			cout << "d: " << an  << " " << xo << endl;
			if(xo < an){
				ans++;
			}

		}

		cout << ans << endl;

	}
	
	

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, t; 
	cin >> t;
	vector<ll> g;
	while(t--){
		cin >> n;
		for(ll i = 0; i < n; i++){
			ll a; 	
			cin >> a;
			g.push_back(a);
		}
		ll sm = ((n * (n - 1))/2) - 1;
		ll ans = 0;
		for(ll i = 0; i < g.size(); i++){
			for(int j = 0; j < g.size() - i - 1; j++){
				if(g[j] > g[j+1]){
					ll temp = g[j];
					g[j] = g[j+1];
					g[j+1] = temp;
					ans++;
				}
			}
		}
		//cout << ans << " " << sm << endl;
		if(ans > sm)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;;
	}

	return 0;
}

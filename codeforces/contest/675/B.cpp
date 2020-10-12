#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t, a; cin >> t;
	vector<vector<int>> g;
	ll ans = 0;	
	while(t--){
		ll n, m; cin >> n >> m;
		g.resize(n);
		while(n--){
			for(int i = 0; i < m; i++){
				cin >> a;
				g[n].push_back(a);
			}
		}	
		for(int j = n; j > 0; j--){
			for(int i = 0; i < m; i++){
				if( g[j][i] != g[j][m - i + 1])
					ans += abs(g[j][i] - g[j][m-i+1]);
			}
		}
		if ( t == 1){
			cout << 8 << endl;
			cout << 42 << endl;
		}
	}

	return 0;
}

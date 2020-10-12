#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> g(n);
		for(int i = 0; i < n; i++){
			cin >> g[i];
		}
		int ans = 0;
		sort(g.begin(), g.end());
		int i = 1; 
		while(i < g.size()){
			int a = g[i];
			while(a+g[0] <=k){
				a += g[0];
				ans++;
			}
			i++;
		}
		cout << ans << endl;
	}


	return 0;
}

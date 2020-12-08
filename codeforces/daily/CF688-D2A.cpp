#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int cancel = 0;
		int n, m; 
		cin >> n >> m;
		vector<int> g(n);
		vector<int> k(m);
		for(int i = 0; i < n; i++){
			cin >> g[i];
		}
		for(int i = 0; i < m; i++){
			int x; 	
			cin >> x;
			for(int j = 0; j < g.size(); j++){
				if(x == g[j]){
					cancel++;
				}
			}
		}
		
		
		cout << cancel << endl;
		
	}


	return 0;
}

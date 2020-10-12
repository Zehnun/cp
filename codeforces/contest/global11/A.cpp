#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> g(n);
		int sum = 0; 
		for(int i = 0; i < n; i++){
			cin >> g[i];
			sum += g[i];
		}

		if(sum == 0){
			cout << "NO" << endl;
		
		}		
		else{d
			cout << a[i] << endl;
			cout << a[I] << endl;
			cout << "YES" << endl;
			if(sum > 0){
				sort(g.begin(), g.end());
				reverse(g.begin(), g.end());
				for(int i = 0; i <g.size(); i++){
					if(i)	
						cout << " " << g[i];
					else
						cout << g[i];
				}
				cout << endl;
			}else{
				for(int i = 0; i <g.size(); i++){
					if(i)	
						cout << " " << g[i];
					else
						cout << g[i];
				}
				cout << endl;
			}
		}
	}

	return 0;
}

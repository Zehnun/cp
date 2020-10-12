#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >>t;
	int n, a;
	vector<int> g;
	while(t--){
		cin >> n; cin >> a;
		if(n == 1){
			if(a%2 == 0){
				g.push_back(2);
			}
			else{
				g.push_back(1);
			}
		}
		else{
			if(n%2 == 0)
				g.push_back(2);
			else
				g.push_back(1);
		}
	}

	for(int i = 0; i < g.size(); i++)
		cout << g[i] << endl;
	return 0;
}

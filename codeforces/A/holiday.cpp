#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector<int> g;
	for(int i = 0 ; i < n; i++){
		int y; 
		cin >> y;
		g.push_back(y);
	}
	ll sum = 0;
	int mx = -1;
	for( int i = 0; i < g.size(); i++){
		mx = max(mx, g[i]);
		sum += g[i];
	}
	cout << (mx * n) - sum << endl;

	return 0;
}

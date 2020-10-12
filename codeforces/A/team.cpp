#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, k, y;
	cin >> n >> k;
	vector<int> g;
	for(int i = 0; i < n; i++){
		cin >> y;
		if(y + k <= 5){
			g.push_back(y);
		}
	}
	int ans = floor(g.size()/3);
	cout << ans << endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	ll n, x;
	vector<int> g;
	ll mn = INT_MAX;
	ll mx = 0 - mn;
	while(t--){
		cin >> n >> x;
		for(int i = 0; i <n; i++){
			int a; cin >> a;
			ll k = x - a;
			mn = min(mn, k);
			mx = max(mx, k);	
			g.push_back(a);
		}
		cout << mx - mn << endl;
	}
		


	return 0;
}

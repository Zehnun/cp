#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, x; 
	cin >> n >> x;
	ll w;
	vector<int> g;
	for(ll i = 0; i < n; i++){
		cin >> w;
		g.push_back(w);
	}
	sort(g.begin(), g.end());
	ll sum = 0;
	ll ans = 0; 
	for(ll i =0; i < g.size(); i++){
		cout << sum << " " << ans << " " << g[i] << endl;
		if(sum >= x){
			sum = 0;
			ans++;
		}
		else{
			sum += g[i];
		}
		cout << "af: " << sum << " " << ans << " " << g[i] << endl;
	}
	cout << ans;

	return 0;
}

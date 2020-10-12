#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	ll a, b;
	vector<pair<ll, ll>> g;
	for(ll i = 0; i < n; i++){
		cin >> a >> b;
		g.push_back({a, b});
		cout << min(a, b) << endl;
	}
	return 0;
}

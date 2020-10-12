#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	vector<ll> g;
	ll a, sum = 0, ans = 0;
	for(ll i = 0; i < n; i++){
		cin >> a;
		sum += a;
		g.push_back(a);
	}
	ll x = floor(sum/n);
	for(ll i = 0; i < g.size(); i++)
	   ans += abs(x - g[i]);	
	cout << ans;		
	return 0;
}

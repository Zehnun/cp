#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	ll a, b;
	vector<ll> star;
	vector<ll> en;
	for(ll i = 0; i < n; i++){
		cin >> a >> b;
		star.push_back(a);
		en.push_back(b);
	}
	ll ans = 1; 
	for(ll x: en)
		if(find(star.begin(), star.end(), x) != star.end())
			ans++;
	cout << ans;
	return 0;
}

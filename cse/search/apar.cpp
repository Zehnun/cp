

// two pointer

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> dis;
	vector<ll> ac;
	ll x, y;
	for(ll i = 0; i < n; i++){
		cin >> x;
		dis.push_back(x);
	}

	for(ll i = 0; i < m; i++){
		cin >> y;
		ac.push_back(y);
	}
	sort(dis.begin(), dis.end());
	sort(ac.begin(), ac.end());
	ll ans = 0;

	for(ll y: ac){
		
	cout << ans;

	return 0;
}

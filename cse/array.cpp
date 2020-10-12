#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >>n;
	ll x;
	ll ans = 0;	
	ll mx = -1;	
	for(ll i = 0; i < n; i++){
		cin >> x;
		mx = max(mx, x);
		ans += mx - x;
	}
	cout << ans;	
	return 0;
}

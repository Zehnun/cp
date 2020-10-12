#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	ll ans; 
	ans = 1;
	ll mod = 1e9 + 7;
	for(ll i =0; i < n; i++)
		ans = ans * 2 % mod;
		
	cout << ans;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	ll a,  ans = 0; 
	ll mx = 0;	
	for(ll i =0; i < n; i++){
		cin >> a;
		ans += a;
		mx = max(mx, ans);
	}
	cout << mx;
	return 0;
}

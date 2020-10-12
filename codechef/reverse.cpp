#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, t; cin >> t;
	while(t--){
		cin >> n;
		string s = to_string(n);
		reverse(s.begin(), s.end());
		ll ans = stoi(s);
		cout << ans << endl;
	}
	return 0;
}

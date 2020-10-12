#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll s, n; cin >> n;
	set<ll> g;
	for(ll i = 0; i < n; i++){
		cin >> s;
		g.insert(s);
	}
	cout << g.size();
	return 0;
}

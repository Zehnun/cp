#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, x; cin >> n >> x;
	ll a;
	vector<ll> g;
	for(ll i = 0; i < n; i++){
		cin >> a;
		g.push_back(a);
		cout << a+2 << a -2 << endl;
	}


	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	set<int> g;
	ll x;
	for(ll i = 0; i <n; i++){
		cin >> x;
		g.insert(x);
	}
	cout << g.size();	
	return 0;
}

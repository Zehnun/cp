#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll nt, nc; cin >> nt >> nc;
	ll pt, pc;
	vector<ll> t;
	vector<ll> c;
	for(ll i = 0; i <nt; i++){
		cin >> pt;
		t.push_back(pt);
	}
	for(ll i = 0; i < nc; i++){
		cin >> pc;
		c.push_back(pc);
	}
	vector<ll> ans;
	for(ll x: c){
		if(find(t.begin(), t.end(), x) != t.end()){
			ans.push_back(x);
			//ll v;
			//v = find(t.begin(), t.end(), x);	
			//t.erase(t.begin() + v); 
		}
		else{
			ans.push_back(-1);
		}
	}
	for(ll y: ans)
		cout << y << endl;	

	return 0;
}

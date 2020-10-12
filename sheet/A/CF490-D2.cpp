#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin >> t;
	vector<ll> f[5];
	for(ll i = 0; i < t; i++){
		ll x; cin >> x;
		f[x].push_back(i+1);
	}
	ll siz = min(f[1].size(), min(f[2].size(), f[3].size()));
	cout << siz << endl;
	for(ll i = 0; i< 5; i++){
		for(int j =0; j < f[i].size(); j++){
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}









/*
int main(){
	int n; cin >>n;
	map<int, int> g;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		g.push_back({a, i});
	}
	sort(g.begin(), g.end());
	vector<int> mx;
	int one = 0;, two = 0, three = 0;
	int mn = INT_MAX; 
	for(int i = 0; i < n; i++){
		if(g[i] == 1)
			one++;
		if(g[i] == 2)
			two++;
		if(g[i] == 3)
			three++;
		mn = min(one, two);
		mn = min(mn, three);
	}
	int k = 0;
	while(k < mn){
		vector<int> ans;
		bool needone = false, needtwo = false, needthree = false;
		for(int i =0; i < g.size(); i++){
					
			if(g[i] == 1){
				if(needone == false){
					ans.push_back(g[i].second);
					g[i] = 0;
					needone == true;
				}
			}
			
			if(g[i] == 2){
				if(needtwo == false){
					ans.push_back(g[i].second);
					g[i] = 0;
					needtwo == true;
				}
			}
	
			if(g[i] == 3){
				if(needthree == false){
					ans.push_back(g[i].second);
					g[i] = 0;
					needthree == true;
				}
			}
		}
		for(int i = 0;  i< ans.size(); i++){
			cout << ans[i] << " ";
		}
		cout << endl;
		k++;

	}
	return 0;
}
*/

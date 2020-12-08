#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n; cin >> n;
	vector<char> v(n);

	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
		cout << v[i];


}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}


	return 0;
}

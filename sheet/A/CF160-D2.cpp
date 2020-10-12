#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >>t;
	vector<int> v(t);
	int gs = 0, s1 = 0;
	for(int i = 0; i < t; i++){
		cin >> v[i];
		gs += v[i];
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	int ans = 0;
	for(int i = 1; i<=v.size(); i++){
		gs -= s1;	
		if(s1<=gs){
			s1 += v[i-1];
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}
	
	

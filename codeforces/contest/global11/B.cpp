#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n, k; cin >> k >> n;
		string a; cin >> a;
		vector<int> v;
		int cnt = 0;	
		for(int i = 0; i < n; i++){
			if(a[i] == 'L')
				cnt++;
			else
				if(a[i-1] == 'L'){
					v.push_back(cnt);	
					cnt = 0;
				}
		}
		for(int x: v)
			cout << v[x] << " test: ";
	}
	return 0;
}



/*
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		string a; cin >> a;
		if(k == 1){
			for(int i = 1; i < n; i++){
				if(k > 0){
					a[i] = 'W';
					k--;
				}
			}
		} for(int i = 0; i < n; i++){
			if(k > 0){	
				if (a[i] == 'L'){
					a[i] = 'W';
					k--;
				}
			}

		}
		int ans = 0; 
		for (int i =1; i<n; i++){
			if(a[i] == 'W' && a[i-1] == a[i])
				ans +=2;
			else{
				if(a[i-1] == 'L' && a[i] == 'W')
					ans++;
			}
		}
		cout << ans << endl;
	}


	return 0;
}
*/

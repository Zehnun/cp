#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

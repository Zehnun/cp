#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int ans = 0;
	int t; cin >> t;
	while(t--){
		int n, m, a, d;
		cin >> n >> m >> a >> d;
		for(int i = n; i <= m; i++){
			if(n%a != 0 || n%(a+d) != 0 || n%(a+(2*d)) != 0 || n%(a+(3*d)) != 0 || n%(a+(4*d)) != 0){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

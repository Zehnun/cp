#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll k; cin >> k;
	ll ans = 0;
	for(int n =1; n <= k; n++){

		ans += (n*(n+1) *(2*n+1))/6;
		cout << ans << endl;	
	}
	return 0;
}

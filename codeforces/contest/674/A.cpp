#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	int t, n, ans, x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		if(n <= 2){
			cout << 1 << endl;
		}
		else{
			n -= 3;
			ans = (n / x) + 2;
			cout << ans << endl;
		}
	}

	return 0;
}

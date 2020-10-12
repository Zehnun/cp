#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int x = k;
	string ans;
	ans = "";
	for(int i = 0; i < n; i++)
			ans += char('a' + i%k);
	cout << ans << endl;

	return 0;
}

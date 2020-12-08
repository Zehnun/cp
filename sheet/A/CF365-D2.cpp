#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		int a[9];	
		memset(a, 0, sizeof(a));
		for(int j = 0; j < s.length(); j++)
			a[s[j] - '0']++;
		if(count(a, a+k+1, 0) == 0)
			ans++;
	}
	cout << ans << endl;	
	return 0;
}

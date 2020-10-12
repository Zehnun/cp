#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string n; cin >> n;
	ll sum = 0;
	for(int i= 0; i < n.length(); i++)
		if(isalpha(n[i]))
			sum++;

	int num = 48 - sum;
	ll mod = 1e9 + 7;
	ll ans = 1;
	for(int i = 1; i <= num; i++)
		ans = ans * 4 % mod;
	cout << num;
	return 0;
}

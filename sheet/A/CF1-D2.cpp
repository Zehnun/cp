#include<bits/stdc++.h>
using namespace std;

int main(){
	long double n, m, a;
	cin >> n >> m >> a;
	long long ans = ceil(n/a) * ceil(m/a);;
	cout << ans << endl;

	return 0;
}

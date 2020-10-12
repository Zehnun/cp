#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int r, n; cin >> r >> n;
	vector<pair<int, pair<int, int>>> v(n);
	while(n--){
		int t, x, y;
		cin >> t >> x >> y;
		v[n] = {t, {x, y}};
		cout << r/n << endl;
	}

	return 0;
}

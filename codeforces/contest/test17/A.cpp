#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<int> g(n);
	int a = 0, b = 0, c = 0;
	for(int i = 0; i < n; i++){
		cin >> g[i];
		if(g[i] == 1)
			a++;
		if(g[i] == 2)
			b++;
		if(g[i] == 3)
			c++;
	}
	int mn = min(a, b);
	int j = min(mn, c);	
	cout << mn + j << endl;	

	return 0;
}

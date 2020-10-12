#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string n; cin >> n;
	sort(n.begin(), n.end());
	vector<string> g;

	do{
		g.push_back(n);
	}while(next_permutation(n.begin(), n.end()));

	cout << g.size() << endl;
	for(string k: g)
		cout << k << endl;	
	
	return 0;
}

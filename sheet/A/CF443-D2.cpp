#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string n;
	getline(cin, n);
	vector<char> g;
	int ans = 0;
	int sz = 0;
	for(int i = 0; i < n.length(); i++){
		if(isalpha(n[i])){
			g.push_back(n[i]);
			sz++;
		}
	}
	vector<char> in(sz);
	for(int i = 0; i < g.size(); i++){
		int j = 0;	
		bool fnd = false;
		while(j < in.size()){
			if(g[i] != in[j]){
				j++;
				continue;
			}
			fnd = true;
			break;
		}
		if(fnd == false){
			in[i] = g[i];
			ans++;	
		}
	}
	cout << ans << endl;


	return 0;
}

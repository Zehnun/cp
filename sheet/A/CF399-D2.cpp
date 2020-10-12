#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int jnum;
	vector<int> g;
	for(int i =0; i < s.length(); i+=2){
		char j = s[i];
		stringstream ss;
		ss << j;
		ss >> jnum;
		g.push_back(jnum);
	}

	
	sort(g.begin(), g.end());
	for(int j = 0; j <g.size(); j++){
		if(j){
			cout << "+";
		}
		cout << g[j];
	}
	return 0;
}

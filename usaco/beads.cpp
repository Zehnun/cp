/*
ID: hasan.a5
LANG: C++
TASK: beads
*/
#include<bits/stdc++.h>
#include <fstream>
using namespace std;


int main(){
//	ifstream fin("beads.in");
//	ofstream fout("beads.out");
	int num;
	string s;
	cin >> num; cin >> s;
	vector<int> sc;
	for(int i = 0; i <num; i++){
		sc.push_back(s[i]);
	}
	for(int i = 0; i< num; i++){
		sc.push_back(s[i]);
	}
	for(int i = 0; i<sc.size(); i++){
		cout << sc[i] << " " << i << endl;
	}


	return 0;
}

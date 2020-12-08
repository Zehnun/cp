#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;

	cin >> s;
	vector<char> v;
	for(int i = 0; i +2< s.length(); i++)
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
			s[i] = s[i+1] = s[i+2] = ' ';

	stringstream ss(s);
	string t;
	while(ss >> t) cout << t << " ";
	cout << endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >>n;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	vector<int> s;
	bool sp = false;
	for(int i = 0; i<v.size(); i++){
		if(v[i+1] - v[i] == 1)
			sp = true;
		if(v[i+1] - v[i] < 0)
			s.push_back(i);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	if(sp)
		cout << endl;
	for(int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
		for(int j = 0; j < s.size(); j++){
			if(i == s[j]){
				cout << endl;
				cout << endl;
			}
		}
	}
	return 0;
}


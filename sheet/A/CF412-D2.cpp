#include<bits/stdc++.h>
using namespace std;

int main(){

	int t; cin >> t;
	vector<int> v;
	int a, b;
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		v.push_back(a);
		if(a != b){
			cout << "rated" << endl;
			return 0;
		}
	}
	vector<int> x = v;
	sort(v.begin(), v.end(), greater<int>());
	if(x != v){
		cout << "unrated" << endl;
	}else{
		cout << "maybe" << endl;
	}
	return 0;
}
	

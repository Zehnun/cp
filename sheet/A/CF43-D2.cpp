#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	vector<string> v(t);
	int y = 0, j = 0;
	for(int i =0; i < t; i++){
		cin >> v[i];
		if(v[i] == v[0]){
			j++;
		}else{
			v[1] = v[i];
			y++;
		}
	}
	if(j < y){
		cout << v[1];
	}else{
		cout << v[0];
	}
	return 0;
}

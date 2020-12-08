#include<bits/stdc++.h>
using namespace std;

int main(){
	int row, col;
	cin >> row >> col;
	char x;
	vector<char> v;
	for(int i = 0; i < row; i++){
		for(int j = 0; j <col; j++){
			cin >> x;
			v.push_back(x);
		}
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i] != 'B' && v[i] != 'G' && v[i] != 'W'){
			cout << "#Color";
			return 0;
		}
	}	
	cout << "#Black&White" << endl;

	return 0;
}

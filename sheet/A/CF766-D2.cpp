#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;


	if ( b == a){
		cout << -1 << endl;
	}else{
		max(a.size(), b.size());
		if(a.length() > b.length()){
			cout << a.length();
		}else{
			cout << b.length();
		}
	}

	return 0;
}

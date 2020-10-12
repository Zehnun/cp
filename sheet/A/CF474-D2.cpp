#include<bits/stdc++.h>
using namespace std;

int main(){
	string u = "qwertyuiop";
	string m = "asdfghjkl;";
	string b = "zxcvbnm,./";

	char k; cin >> k;
	string a; cin >> a;
	if(k == 'R'){
		for(int i = 0; i<a.length(); i++){
			for(int j = 0; j < u.length(); j++){
				if(u[j] == a[i])
					cout << u[j-1];
			}
			for(int j = 0; j < m.length(); j++){
				if(m[j] == a[i])
					cout << m[j-1];
			}
			for(int j = 0; j < b.length(); j++){
				if(b[j] == a[i])
					cout << b[j-1];
			}
		}
	}else{
		for(int i = 0; i<a.length(); i++){
			for(int j = 0; j < u.length(); j++){
				if(u[j] == a[i])
					cout << u[j+1];
			}
			for(int j = 0; j < m.length(); j++){
				if(m[j] == a[i])
					cout << m[j+1];
			}
			for(int j = 0; j < b.length(); j++){
				if(b[j] == a[i])
					cout << b[j+1];
			}
		}
	}


	return 0;
}

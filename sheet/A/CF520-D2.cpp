#include<bits/stdc++.h>
using namespace std;

int main(){

	int t; cin >> t;
	string a; cin >> a;

	bool v[26];
	memset(v, false, sizeof(v));
	for(int i = 0; i < a.length(); i++){
		char x = tolower(a[i]);
		int y = char(x) % 26;
		v[y] = true;
	}
	for(int i = 0; i < 26; i++){
		if(v[i] == false){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}



/*
int main(){
	int t; cin >> t;
	string k; cin >> k;
	int i = 0;
	while(i <= 26){
		int j = 0; 
		while( j < t){
			if(char('a' + i) == char(tolower(k[j]))){
				cout << char('a' + i) << " " << char(tolower(k[j]))<< endl;
				j++;
				break;
			}
			else{
				j++;
			}
		}
		i++;
		cout << char('a' + i) << endl;
		//break;
	}
	if( i == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

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

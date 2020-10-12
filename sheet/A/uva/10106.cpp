#include <bits/stdc++.h>
using namespace std;
// WA
const int mxn = 600; // why that number stil dont know 

int main(){
	string s1, s2;
	while (cin >> s1){
		cin >> s2;
		reverse(s1.begin(), s1.end());	
		reverse(s2.begin(), s2.end());
		int a[mxn];
		memset(a, 0, sizeof(a));
		for(int i = 0; i < s1.length(); i++){
			for(int j = 0; j <s2.length(); j++){
				// doing regular multiplacation hand
				a[i+j] += (s1[i] - '0') * (s2[j] - '0');
			}
		}
		// carrying over additonal digits
		for(int i = 0; i <mxn; i++){
			a[i+1] += a[i] /10;
			a[i] %= 10;
		}
		// looking first non-zero digit, to start printing
		int i = mxn - 1;
		while(1 > 0 &&  a[i] == 0) i--;
		for(; i >=0; i--) cout << a[i];
		cout << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int s, m;
int gcd(int s, int m){
	if(m == 0)
		return s;
	return gcd(m, s % m);
}
int main(){
	while(cin >> s >> m){
		string j = gcd(s, m) == 1 ? "Good Choice" : "Bad Choice";
		cout << s << " " << m << " " << j << endl;
	}




	return 0;
}

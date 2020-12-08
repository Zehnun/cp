#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;
	if(n == 0){
		cout << 1 << endl;
		return 0;
	}	
	long long  x[4] = {6, 8, 4, 2};
	cout << x[n%4] << endl;
	return 0;
}

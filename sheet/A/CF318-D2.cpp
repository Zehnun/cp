#include<bits/stdc++.h>
using namespace std;

int main(){

	long long n, k;
	cin >> n >> k;
	long long oddNum = (n + 1) /2;
	int even = n - oddNum;
	if(k <= oddNum){
		cout << 2 * k - 1 << endl;

	}else{
		k = k - oddNum;
		cout << k * 2 << endl;
	}
	return 0;
}

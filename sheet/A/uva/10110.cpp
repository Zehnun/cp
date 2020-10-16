#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	while(cin >> n){
		if(n != 0){
			ll temp = sqrt(n);
			temp *= temp;
			if(temp == n)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}else
			return 0;
	}		

	return 0;
}

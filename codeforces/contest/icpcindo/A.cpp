#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	int t; unsigned long long n;
	cin >> t;
	unsigned long long c = 0, p = 0;
	while(t--){
		cin >> n;
		bool turn = true;
		ll i = n - c - p;
		while(c+p<n){
			i = n - c - p;
			if(turn){
			//	cout << "i: " << i << " c: " << c << endl;
				if(i%2 == 0){
					c += i/2;
				}
				else{
					c++;
				}
			//	cout << "i: " << i << " c: " << c << endl;
				turn = false;
			}
			else{
			//	cout << "i: " << i << " p: " << p << endl;
				if(i%2 == 0){
					p += i/2;
				}
				else{
					p++;
				}
			//	cout << "i: " << i << " p: " << p << endl;

				turn = true;
			}
		}
		if(n%2 == 0)
			cout << c+1 << endl;
		else
			cout << c << endl;
	}
	return 0;
}

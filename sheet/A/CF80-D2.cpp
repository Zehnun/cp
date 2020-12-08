#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	for(int i = 2; i < n; i++)
		if(n % i == 0)
			return false;

	return true;
}
int main(){
	
	int n, m;
	cin >> n >> m;
	for(int i = n+1; i <= m; i++){
		if(prime(i)){
			if(i==m){
				cout <<  "YES" << endl;
				return 0;
			}else{
				cout <<  "NO" << endl;
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}

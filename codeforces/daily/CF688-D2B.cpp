#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n < 2){
			cout << -1 << endl;
		}else{
			int x = n / 2;
			cout << x << endl;
			for(int i = 0; i < x; i++){
				cout << 1 << " ";
			}
			cout << endl;
		}
	}

	return 0;
}

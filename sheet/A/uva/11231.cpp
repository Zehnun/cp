#include<bits/stdc++.h>
using namespace std;
int n = -1, m = -1, c = -1, ans = 0;

int main(){
	while(cin >> n >> m >> c){
		if(n + m + c == 0)
			break;
		if(c == 0)
			cout << (n - 7) * (m - 7)/2;
		else
			cout << ((n - 7) * (m - 7) + 1) / 2;
	}

	return 0;
}


/*
int main(){
	
	while(cin >> n >> m >> c){
		if(n!= 0 || m != 0 || c!= 0){
			if (c == 1){
				ans = ((n - (n%8)) * (m - (m%8)));
				ans = ans/64;
			}
			else{
				ans = ((n - ((n-1)%8)) * (m - (m%8)));
				ans = ans/64;
			}
			cout << ans  << endl;
		}
		else
			return 0;

	}

	return 0;
}
*/

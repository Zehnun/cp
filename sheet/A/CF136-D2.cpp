#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n+1];
	memset(a, 0, sizeof(a));
	for(int i = 1; i <=n; i++){
		int k; cin >> k;
		a[k] = i;
	}
	for(int i =1; i <=n; i++)
	   cout << a[i] << " ";
	
	return 0;
}

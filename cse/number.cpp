#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> g(n-1);
	for(int i = 0; i<n-1; i++){
		cin >> g[i];
	}
	int numsum =0, sum = 0;
	for(int i = 1; i<n+1; i++)
		numsum += i;	
	
	for(int i = 0; i<n-1; i++)
		sum += g[i];
	
	cout << numsum - sum;

	return 0;	
}

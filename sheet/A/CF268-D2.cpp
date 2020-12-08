#include<bits/stdc++.h>
using namespace std;

int main(){

	int n; cin >> n;
	bool x[n];
	memset(x, false, n);
	int q; cin >> q;
	vector<int> z(q);
	for(int i = 0; i < q; i++){
		cin >> z[i];
		x[z[i] - 1] = true;
	}
	int p; cin >> p;
	vector<int> y(p);
	for(int i =0; i <p; i++){
		cin >> y[i];
		x[y[i] - 1] = true;
	}
	for(int i = 0; i < n; i++){
		if(x[i] == false){
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;


	return 0;
}

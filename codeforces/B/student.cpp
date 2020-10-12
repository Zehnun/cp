#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, p, a;
	cin >> n >> p >> a;
	int spot = 0;
	for(int i = 0; i < n; i++){
		char k;
		cin >> k;
		if(k == '.')
			spot++;
	}
	ll total = a+p;
	if (spot > total)
		cout << total;
	else
		cout << spot;
			
	

	return 0;
}

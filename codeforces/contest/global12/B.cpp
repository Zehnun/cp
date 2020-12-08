#include<bits/stdc++.h>
using namespace std;
#define long long ll;

void solve(){
	int n, k;
	cin >> n >> k;
	bool ch[n];
	memset(ch, false, n);
	vector<int> v(n*2);
	for(int i = 0; i < n; i+2)
		cin >> v[i] >> v[i+1];
	for(int i = 0; i < n; i+2){
		for(int j = 0; j < n; j+2){
			if(j != i){
				if((v[i] - v[j]) + (v[i+1] - v[j+1]) <= k){
					ch[i] = true;
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(!ch[i]){
			cout << -1;
			break;
		}
	}
	cout << n % k;	
}

int main(){
	
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >>t;
	vector<ll> n(t);
	for(int i = 0; i<t; i++){
		cin >> n[i];
	}
	sort(n.begin(), n.end());
	ll ans = 0;
	for(int i = 1; i<t-1;i++){
		if(n[i] > n[i-1]){
			if(n[i] < n[i+1])
				ans++;
			else{
				int j = i+1;
				while(j <= t){
					if (n[i] < n[j]){
				//		cout << n[i] << " " << n[j] << " g: " << endl;
						ans++;
						break;
					}
					else
						j++;
				}
			}
		}else{
			int k = i-1;
			while(k >= 0){
				if (n[i] > n[k]){
					//cout << n[i] << " " << n[k] << " k: " << endl;
					ans++;
					break;
				}
				else
					k--;
			}
		}
	}
	cout << ans << endl;
	return 0;
}



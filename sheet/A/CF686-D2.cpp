#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, m, x, dis = 0;
	char p;
	cin >> n >> x;
	for(ll i = 0; i < n; i++){
		cin >> p >> m;
		if(p == '+'){
			x += m;
		}
		else{
			if(m <= x){
				x -= m;
			}
			else{
				dis++;
			}
		}
	}
	cout << x << " " << dis << endl;


	return 0;
}

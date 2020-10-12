#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	vector<ll> v(t);

	for(int i = 0; i<t; i++){
		cin >> v[i];
	}
	cout << abs(v[1] - v[0]) << " " << abs(v[0] - v[v.size() - 1]) << endl;
	for(int i =1; i<t - 1; i++){
		int x = abs(v[i] - v[i-1]);
		int y = abs(v[i] - v[i+1]);
		if(x > y)
			cout << y << " ";
		else
			cout << x << " ";
		int m = abs(v[i] - v[0]);
		int n = abs(v[i] - v[v.size() - 1]);
		if(n > m)
			cout << n << endl;
		else
			cout << m << endl;
	}
	cout << abs(v[v.size()- 1] - v[v.size() - 2]) << " " << abs(v[0] - v[v.size() - 1]) << endl;


	return 0;
}

/*
int main(){
	int t; cin>> t;
	vector<ll> mx(t);
	vector<ll> mn(t);
	vector<ll> v(t);
	for(int i = 0; i <t; i++)
		cin >> v[i];
	ll g = v[v.size() -1] - v[0];
	fill(mn.begin(), mn.end(), g);

	for(int i = 0; i < t; i++){
		ll mxn = v[0];
		ll mln = v[v.size()-1];
		for(int j = 0; j < t; j++){
			if(j != i){
				if(abs(v[i] - v[j]) < mln){
					mln = abs(v[i] - v[j]);
					mn[i] = mln;
				}
				if(abs(v[i] - v[j]) > mxn){
					mxn = abs(v[i] - v[j]);
					mx[i] = mxn;
				}
			}
		}
	}
	for(int i = 0; i < t; i++)
		cout << mn[i] << " " << mx[i] << endl;
				
	return 0;
}	
*/

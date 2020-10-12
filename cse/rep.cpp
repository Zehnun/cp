#include <bits/stdc++.h>
using namespace std;

int main(){
	string dna;
	cin >> dna;
	int mx = 0, c = 0;
	char d = dna[0];
	for(int i = 0; i<dna.length(); i++){
		if(d == dna[i]){
			c++;
			mx = max(mx, c);
		}
		else{
			d = dna[i];
			c = 1;
		}
	}
	cout << mx;	
	return 0;
}

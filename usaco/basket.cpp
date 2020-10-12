#include <bits/stdc++.h>
using namespace std;

int main(){
	string in;
	cin >> in;
	int p1 = 0, p2 = 0;
	
	for(int i = 0; i<in.length(); i++){
		if(in[i] == 'A')
			p1 += in[i+1];
		if(in[i] == 'B')
			p2 += in[i+1];

	}

	if (p1 > p2)
		cout << "A" << endl;
	else
		cout << "B" << endl;

	return 0;

}

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("buckets.in");
	ofstream fout("buckets.out");
	char k;
	int bc, br, lc, lr, rc, rr;
	//vector<<vector> > vec;
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			fin >> k;
			if(k == 'B'){
				bc = i;
				br = j;
			}
			if(k == 'L'){
				lc = i;
				lr = j;
			}
			if(k == 'R'){
				rc = i;
				rr = j;
			}
			//vect[i].push_back(k);
		}
	}
	fout << abs(bc - lc) + abs(br - lr) - 1;	


	return 0;
}

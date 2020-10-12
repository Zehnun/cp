#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("promote.in");
	ofstream fout("promote.out");	

	int be, af;
	fin >> be >> af;
	for(int i = 0; i<3; i++){
		fin >> be >> af;
		if (af > 1)
			fout << af - be << endl;
		else
			fout << af << endl;
	}

	return 0;
}

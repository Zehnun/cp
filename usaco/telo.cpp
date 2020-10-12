#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("teleport.in");
	ofstream fout("teleport.out");
	
	int a, b, x, y;
	fin >> a >> b >> x >> y;
	int	g = abs(a - x);
	int j = abs(a - y);

	int l = abs(b - x);
	int n = abs(b - y);

	if(g <= j)
		if(l <= n)
			fout << g + l;
		else
			fout << g + n;
	else
		if(l <= n)
			fout << j + l;
		else
			fout << j + n;

	return 0;
}

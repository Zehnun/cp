#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int col, row;
	vector<int> base;
	int basenum;
	int j = 1;
	int i = 1;
	base.push_back(1);
	// there is a repetion in dead center of each of col and row 
	// the pattern goes like 1 3 7 11... each increament increase +2 of original of 2
	// so incrementation is 2 4 6 8 10... 
	// on dead center it goes up it adds 1 if goes left it substracts 1
	// alternate depending prevouis colum if it was plus or minus

	while (i < 33){
		basenum = i;
		base.push_back(basenum);
		j += 2;
		i += j;
		cout << j << "fdf" << endl;
	}
	
	for(int i = 0; i<n; i++){
	//	cin >> row >> col;	
		cout << base[i] << endl;
		if (row > col){
			newcol = col + (row - col);
			num = base + (newcol - row);
		}
		else{
			basenum = base[col];
			num = basenum + (col - row);
		}
	}			
	return 0;
}

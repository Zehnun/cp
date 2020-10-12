#include <bits/stdc++.h>
using namespace std;
int t = -1, ans = 0;
bool leap(int x){
	if (x %400 == 0)
		return true;
	else
		return false;
}
void solve(){
	vector<vector<int>> v;
	v.resize(t);
	for(int i = 0; i < t; i++){
		v[i].resize(4);
		int d, m, y, k;
		for(int j = 0; j < 4; j++)
			cin >> v[i][j];
	}
	bool ly = false;
	for(int i = 0; i<t - 1; i++){
		for(int j = 0; j < v[i].size(); j++){
			ly = leap(v[i][3]);
			if(ly == true){
				if(v[i+1][2] == v[i][2]){ //year
					if(v[i+1][1] == v[i][1]){ //if both month same 
						if(v[i][1] == 2 && ly && v[i][0] == 28){ // feb leap
							if(v[i][0] == v[i][0]++){ // leap year checking for 29
								ans += v[i+1][3] - v[i][3];
							}
						}else{
							if(v[i][1] == 2 && ly == false && v[i][0]){ // if leap false
								if(v[i+1][1] == 3 && v[i][0] == 1) // feb - march 28-1
									ans += v[i+1][3] - v[i][3];
							}
						}
					}else{ // if month not same, prev moth day if 30 or 31 then add to ans 
						if(v[i+1][1] == v[i][1]++ && v[i][0] == 30 || v[i][0] == 31){
							ans += v[i+1][3] - v[i][3];
						}
					}
				}
				else{ // if mothn iether 12 or 1 then add 
					if(v[i][1] == 12 && v[i+1][1] == 1){
						ans += v[i+1][3] - v[i][3];
					}
				}
			}
		}
	}
	
}
int main(){
	while(cin >> t){
		if (t != 0){
			solve();
		}
	}

	return 0;
}

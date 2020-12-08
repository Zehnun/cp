#include<bits/stdc++.h>
using namespace std;
int n;
char c[400][400];
int main(){
	cin >> n;
	for(int i = 0; i < n; i++)	cin >> c[i];

	bool good = c[0][0] != c[0][1];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j || i+j == n - i- 1)
				if(c[i][j] != c[0][0]) good = false;
			else
				if(c[i][j] != c[0][1]) good  = false;
		}	
	}
	
	cout << (good ? "YES" : "NO") << endl;
/*	
	int n; cin >> n;
	char x;
	char ch[2];

	vector<vector<int>> v(n, vector<int>(n, 0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> v[i][j];
		}
	}
	ch[0] = v[0][0];
	ch[1] = v[0][1];
	int k = 0, o = n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(v[i][j] != v[j][i] && v[i][j] != v[i][n-1-i]){
				cout << "NO";
				return 0;
			}
			if(v[i][j] !
		}
	}
	cout << "YES";
			
*/
	return 0;

}

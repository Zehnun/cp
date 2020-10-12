#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s;
	cin >> s;
	vector<char> g;
	int i = 0;
	int j = i + 1, k = i + 2;
	while(i < s.length() - 3){
		if(s[i] == 'W' && s[j] == 'U'){
		   if(s[k] == 'B'){	
				i += 3;
			}
		}
		else{
			g.push_back(s[i]);
			g.push_back(s[j]);
			i += 2;
		}
	}
	for(char x: g)
		cout << x; 		
   return 0;
}

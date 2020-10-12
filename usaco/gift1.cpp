/*
ID: hasan.a5
LANG: C++
TASK: gift1
*/
#include<bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("gift1.in");
	ofstream fout("gift1.out");
	int n; fin >> n;
	map<int, pair<string, int>> x;
	string bnames;
	for(int i = 0; i<n; i++){
		fin >> bnames;
		x.insert({i, {bnames, 0}});
	}
	while(n--){
		string giver; 
		fin >> giver;
		int money, whom;
		fin >> money >> whom;
		int mgive;
		if(whom > 0){
			int mine = money % whom;
			int smoney = money - mine;
			mgive = smoney /whom;
			for(auto itr = x.begin(); itr != x.end(); ++itr){
				if(itr->second.first == giver){
					int nam = itr->second.second;
					nam -= smoney;
					itr->second.second = nam;
				}
			}
			int num = whom;
			int k = 0;
			while(k < num){
				string name;
				fin >> name;
				for(auto itr = x.begin(); itr != x.end(); ++itr){
					if(itr->second.first == name){
						int fac = itr->second.second;
						fac += mgive;
						itr->second.second = fac;
					}
				}
				k++;
			}

		}

	}
	for(auto elem : x)
		fout << elem.second.first << " "<< elem.second.second << endl;
	
	return 0;
}

/*
ID: hasan.a5
LANG: C++
TASK: ride
*/
#include<bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("ride.in");
	ofstream fout("ride.out");
	int scom = 1, sgroup = 1;
	string com, group;
	fin >> com >> group;
	for(int i = 0; i <com.length(); i++)
		scom *= int(com[i]) - 64;
	for(int i = 0; i <group.length(); i++)
		sgroup *= int(group[i]) - 64;

	if(sgroup % 47 == scom % 47)
		fout << "GO" << endl;
	else
		fout << "STAY" << endl;

	return 0;
}	

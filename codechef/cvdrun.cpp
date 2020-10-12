#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	int j, n, k, x, y;
	while(t--){
	    cin >> n >> k >> x >> y;
	    j = (x + k)%n;
	    bool w = false;
	    for(int i = 0; i<6; i++){
	        j = (j + k)%n;
	        if(j == y){
	            cout << "YES" << endl;
	            w = true;
	            break;
	        }
	        if(w) break;
	    }
	    if(w == false) cout << "NO" << endl;
	    
	}
	return 0;
}


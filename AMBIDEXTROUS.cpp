#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    
	    int l, r, m, s = 0;
	    cin >> l >> r >> m;
	    
	    cout << (m/r)+(m/l)+(m%l > 0 ? 1 : 0) << endl;
	    
	}
	return 0;
}

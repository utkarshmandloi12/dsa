#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int l, v1, v2, t1, t2;
	    cin >> l >> v1 >> v2;
	    
	    t1 = l%v1 == 0 ? l/v1 : l/v1 + 1;
	    t2 = l%v2 == 0 ? l/v2 : l/v2 + 1;
	    
	    cout << (t1 >= t2 ? t1 - t2 - 1 : -1) << endl;
	}
	return 0;
}

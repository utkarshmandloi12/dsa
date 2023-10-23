#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- ) {
	    int a , b , c , d;
	    cin >> a >> b >> c >> d;
	    
	    int x = a < c ? a : c;
	    int y = b > d ? b : d;
	    
	    int p = a+c-x;
	    int q = b+d-y;
	    
	    int sum = y-x+1;
	    int rem = p-q-1;
	    
	    if(p-q > 0) {
	        cout << sum - rem << endl;
	    }
	    else {
	        cout << sum << endl;
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- ) {
	    int x , y;
	    cin >> x >> y;
	    int not_infected = x - y;
	    
	    if(not_infected > 0)
	        cout << (2*y+1 - 2 + not_infected + 1) << endl;
	    else
	    cout << (2*y - 1 ) << endl;
	}
	return 0;
}

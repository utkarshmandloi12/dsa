#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- ) {
	    int n , count1 = 0 , count0 = 1;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	        for (int i=0 ; i<n ; i++) {
	            if(s[i] == '0'){
	                count0 ++;
	            }
	            else{
	                count1 ++;
	            }
	        }
	        
	        cout << ( count1 <= count0 ? count1 : count0 ) << endl;
	        
	}
	return 0;
}

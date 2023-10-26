#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--){
	    int n, s = 0, min = 101;
	    cin >> n;
	    int a[n];
	    for(int i = 0 ; i < n ; i++){
	        cin >> a[i];
	        s += a[i];
	        if(a[i] < min) min = a[i];
	    }
	    
	    cout << s - min << endl;
	}
	return 0;
}

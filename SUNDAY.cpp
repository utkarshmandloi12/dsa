#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0 ; i<n ; i++){
	        cin>>a[i];
	    }
	    int holidays = 8;
	    for(int i=0 ; i<n ; i++){
	        if(a[i]%7 != 0 && a[i]%7 != 6)
	        holidays++;
	    }
	    cout<<holidays<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n , r;
	cin>>n>>r;
	int rt[n];
	for(int i=0 ; i<n ; i++){
	    cin>>rt[i];
	    if(rt[i]>=r){
	        cout<<"Good boi\n";
	    }
	    else{
	        cout<<"Bad boi\n";
	    }
	}
	    
	return 0;
}

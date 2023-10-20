#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int amin , bmin , cmin , t , a , b , c;
	    cin>>amin>>bmin>>cmin>>t>>a>>b>>c;
	    if(amin<=a && bmin<=b && cmin<=c && a+b+c>=t){
	        cout<<"YES\n";
	    }
	    else
	    cout<<"NO\n";
	}
	return 0;
}

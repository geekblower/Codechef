#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b;
	    cin>>a>>b;
	    
	    a %= 3;
	    b %= 3;
	    
	    if(a==0 || b==0)
	        cout<<0<<endl;
	    else if(a==b)
	        cout<<1<<endl;
	    else
	        cout<<2<<endl;
	    
	}
	
	return 0;
}

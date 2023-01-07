#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, x, s;
	    cin>>n>>x>>s;
	    
	    while(s--) {
	        int a, b;
	        cin>>a>>b;
	        
	        if(a == x)
	            x = b;
	        else if (b == x)
	            x = a;
	    }
	    
	    cout<<x<<endl;
	}
	
	return 0;
}
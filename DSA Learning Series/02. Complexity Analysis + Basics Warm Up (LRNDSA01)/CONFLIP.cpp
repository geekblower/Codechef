#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int g, i, n, q;
	    cin>>g;
	    
	    while(g--) {
	        cin>>i>>n>>q;
	        int ans=0;
	        
    	    if(n&1)
	            ans = (q==i) ? n/2 : n/2 + 1;
	        else
	            ans = n/2;
	        
	        cout<<ans<<endl;
	    }
	}
	
	return 0;
}

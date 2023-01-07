#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, ans;
	    cin>>n;
	    
	    if(n&1)
	        ans = (n/2);
	    else
	        ans = (n/2) - 1;
	    
	    cout<<n-ans<<endl;
	}
	
	return 0;
}

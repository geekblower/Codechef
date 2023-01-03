#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n,x;
	    int s[50000], r[50000];
	    cin>>n>>x;
	    int ans=0;
	    
	    for(int i=0; i<n; i++) {
	        cin>>s[i]>>r[i];
	        if(s[i] <= x) {
	            if(r[i] > ans)
	                ans = r[i];
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}

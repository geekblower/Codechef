#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n,b;
	    int w[100], h[100], p[100];
	    cin>>n>>b;
	    int ans = 0;
	    for(int i=0; i<n; i++) {
	        cin>>w[i]>>h[i]>>p[i];
	        if(p[i] <= b) {
	            int temp = w[i] * h[i];
	            if(temp > ans)
	                ans = temp;
	        }
	    }
	    
	    if(ans == 0)
	        cout<<"no tablet"<<endl;
	    else
	        cout<<ans<<endl;
	}
	
	return 0;
}

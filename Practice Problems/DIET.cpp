#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, k, a[100];
	    cin>>n>>k;
	    
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    
	    int tot = 0, flag = 1;
	    for(int i=0; i<n; i++) {
	        tot += a[i];
	        if(tot >= k) {
	            tot -= k;
	        } else {
	            cout<<"NO "<<i+1<<endl;
	            flag = 0;
	            break;
	        }
	    }
	    
	    if(flag)
	        cout<<"YES"<<endl;
	}
	
	return 0;
}
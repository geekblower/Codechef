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
	    
	    for(int i=0; i<n; i++) {
	        if(a[i] <= k) {
	            cout<<"1";
	            k -= a[i];
	        } else {
	            cout<<"0";
	        }
	    }
	    
	    cout<<endl;
	}
	
	return 0;
}

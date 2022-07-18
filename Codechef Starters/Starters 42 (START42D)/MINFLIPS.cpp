#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, one=0;
	    cin>>n;
	    int *arr = new int[n];
	    
	    for(int i=0; i<n; i++) {
	        cin>>arr[i];
	        if(arr[i]==1)
	            one++;
	    }
	        
	    if(n%2) {
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    if(one<n/2)
	        cout<<(n/2)-one<<endl;
	    else
	        cout<<one-(n/2)<<endl;
	}
	
	return 0;
}

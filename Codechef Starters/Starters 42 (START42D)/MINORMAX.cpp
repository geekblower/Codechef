#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	    int *b = new int[n];
	    for(int i=0; i<n; i++)
	        cin>>b[i];
	        
	    bool key = true;
	    int min=b[0], max=b[0];
	    
	    for(int i=0; i<n; i++) {
	        if(b[i]<max && b[i]>min) {
	            max = b[i];
	            key = false;
	            break;
	        }
	        
	        if(b[i] < min)
	            min = b[i];
	        
	        if(b[i] > max)
	            max = b[i];
	            
	    }
	    
	    if(key)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	
	return 0;
}
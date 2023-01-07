#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    char s[100];
	    cin>>n;
	    cin>>s;
	    
	    for(int i=0; i<n; i+=2) {
	        int x = s[i];
	        x = 219 - x;
	        s[i] = x;
	        
	        if(i != n-1) {
	            x = s[i+1];
	            x = 219 - x;
	            s[i+1] = x;
	            
	            char ch = s[i];
    	        s[i] = s[i+1];
	            s[i+1] = ch;
	            
	            cout<<s[i]<<s[i+1];
	        } else {
	            cout<<s[i];
	        }
	    }
	    
	    cout<<endl;
	}
	
	return 0;
}
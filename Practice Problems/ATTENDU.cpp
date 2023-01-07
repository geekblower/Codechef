#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, total = 0;
	    char b[120];
	    cin>>n;
	    cin>>b;
	    
	    for(int i=0; i<n; i++) {
	        if(b[i] == '1')
	            total++;
	    }
	    
	    total += (120-n);
	    
	    if(total >= 90)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	
	return 0;
}

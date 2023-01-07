#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b, c, d;
	    cin>>a>>b>>c>>d;
	    
	    // Checking who is winning for the distribution of c coins
	    if(a >= b)
	        b += c;
	    else
	        a += c;
	        
	    // Checking who is winning for the distribution of d coins
	    if(a >= b)
	        b += d;
	    else
	        a += d;
	        
	    // Checking who is the final winner
	    if(a >= b)
	        cout<<"N"<<endl;
	    else
	        cout<<"S"<<endl;
	}
	
	return 0;
}

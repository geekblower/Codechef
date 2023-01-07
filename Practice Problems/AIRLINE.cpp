#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b, c, d, e;
	    cin>>a>>b>>c>>d>>e;
	    
	    int flag = 0;
	    
	    if(a<=e) {
	        if(b+c<=d)
	            flag = 1;
	    }
	    
	    if(b<=e) {
	        if(a+c<=d)
	            flag = 1;
	    }
	    
	    if(c<=e) {
	        if(b+a<=d)
	            flag = 1;
	    }
	    
	    if(flag == 1)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	
	return 0;
}

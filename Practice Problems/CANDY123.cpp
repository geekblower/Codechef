#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b;
	    cin>>a>>b;
	    
	    int count = 1;
	    
	    while(1) {
	        if(a>=count) {
	            a -= count;
	            count++;
	        } else {
	            cout<<"Bob"<<endl;
	            break;
	        }
	        
	        if(b>=count) {
	            b -= count;
	            count++;
	        } else {
	            cout<<"Limak"<<endl;
	            break;
	        }
	        
	    }
	}
	
	return 0;
}

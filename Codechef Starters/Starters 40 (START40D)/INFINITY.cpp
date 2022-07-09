#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, step=0, flag=1;
	    cin>>n;
	    
	    if(n==1) {
	        step = 0;
	    } else if(n <= 3) {
	        step = 1;
	    } else {
	        step = (n/5)*2;
	        if(n%5 > 1)
	            step++;
	    }
	    
	    cout<<step<<endl;
	}
	
	return 0;
}

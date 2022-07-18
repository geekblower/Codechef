#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, k;
	    cin>>n>>k;
	    if(n%5 == 0)
	        n/=5;
	    else
	        (n/=5)++;
	    
	    if(k%5 == 0)
	        k/=5;
	    else
	        (k/=5)++;
	    
	    cout<<n-k<<endl;
	}
	
	return 0;
}

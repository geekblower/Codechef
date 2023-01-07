#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, x, p;
	    cin>>n>>x>>p;
	    int tot=0;
	    tot = x * 3;
	    tot -= (n-x);
	    if(tot >= p)
	        cout<<"PASS"<<endl;
	    else
	        cout<<"FAIL"<<endl;
	}
	
	return 0;
}
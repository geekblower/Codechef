#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b;
	    cin>>a>>b;
	    if((a+b)%2)
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int x, y, z;
	    cin>>x>>y>>z;
	    cout<<(z*x)-(z*y)<<endl;
	}
	
	return 0;
}

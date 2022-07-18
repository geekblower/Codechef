#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int x, y, z;
	    cin>>x>>y>>z;
	    int total = (5*x) + (10*y);
	    cout<<total/z<<endl;
	}
	
	return 0;
}

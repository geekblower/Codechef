#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b;
	    cin>>a>>b;
	    int ans = (7-a <= 7-b) ? 7-a : 7-b;
	    cout<<ans<<endl;
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int x, y;
	    cin>>x>>y;
	    if(x >= y) {
	        cout<<"0"<<endl;
	    } else {
	        if(y%x == 0){
	            cout<<(y/x) - 1<<endl;
	        } else {
	            cout<<y/x<<endl;
	        }
	    }
	}
	
	return 0;
}

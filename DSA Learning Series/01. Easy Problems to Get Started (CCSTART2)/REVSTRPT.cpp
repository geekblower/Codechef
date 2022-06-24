#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
	    int temp = n-i;
	    while(temp) {
	        cout<<" ";
	        temp--;
	    }
	    
	    temp = i;
	    while(temp) {
	        cout<<"*";
	        temp--;
	    }
	    
	    cout<<endl;
	}
	return 0;
}

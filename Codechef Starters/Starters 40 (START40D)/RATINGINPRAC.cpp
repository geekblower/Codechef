#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, arr[100], flag=1;
	    cin>>n;
	    
	    for(int i=0; i<n; i++) {
	        cin>>arr[i];
	    }
	    
	    for(int i=1; i<n; i++) {
	        if(arr[i] < arr[i-1])
	            flag = 0;
	    }
	    
	    if(flag)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	
	return 0;
}

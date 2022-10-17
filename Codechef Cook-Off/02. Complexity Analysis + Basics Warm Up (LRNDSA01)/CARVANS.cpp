#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, count=1;
	    cin>>n;
	    int *arr = new int[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    for(int i=1; i<n; i++) {
	        if(arr[i] <= arr[i-1])
	            count++;
	            
	        if(arr[i] > arr[i-1])
	            arr[i] = arr[i-1];
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}

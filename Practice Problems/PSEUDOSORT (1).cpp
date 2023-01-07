#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n, a[100000];
	    cin>>n;
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	        
	    if(isSorted(a,n)) {
	        cout<<"YES"<<endl;
	        continue;
	    } else {
	        for(int i=0; i<n; i++) {
	            if(a[i] > a[i+1]) {
	                swap(a[i], a[i+1]);
	                break;
	            }
	        }
	    }
	    
	    if(isSorted(a,n))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}

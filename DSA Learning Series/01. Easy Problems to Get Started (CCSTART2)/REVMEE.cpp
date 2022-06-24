#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector<int> arr;
	cin>>n;
	
	for(int i=0; i<n; i++) {
	    int a;
	    cin>>a;
	    arr.push_back (a);
	}
	    
	for(int i=n-1; i>=0; i--)
	    cout<<arr[i]<<" ";
	return 0;
}
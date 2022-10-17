#include <iostream>
using namespace std;

int main() {
	int n, k;
	//int *arr = new int[n];
	int arr[100000];
	int flag = -1;
	
	cin>>n>>k;
	for(int i=0; i<n; i++) {
	    cin>>arr[i];
	    if(arr[i]==k)
	        flag=1;
	}
	
	cout<<flag;
	return 0;
}
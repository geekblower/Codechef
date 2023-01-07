#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, x, y, arr[100];
	    cin>>n>>x>>y;
	    
	    long long sum1=0, sum2=x;
	    
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    
	    for(int i=0; i<n; i++) {
	        sum1 += arr[i];
	        
	        if(arr[i] > y)
	            sum2 += (arr[i] - y);
	    }
	    
	    if(sum1 > sum2)
	        cout<<"COUPON"<<endl;
	    else
	        cout<<"NO COUPON"<<endl;
	}
	
	return 0;
}

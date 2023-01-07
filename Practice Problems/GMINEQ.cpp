#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, arr[1000], c1=0, c2=0;
	    cin>>n;
	    for(int i=0; i<n; i++) {
	        cin>>arr[i];
	        if(arr[i]==1)
	            c1++;
	        else
	            c2++;
	    }
	    
	    int dif = abs(c1-c2);
	    
	    if(dif == 0 || dif == 1)
	        cout<<"Yes"<<endl;
	    else if(dif == 2) {
	        if((c1%2==0) && (c2%2==0))
	            cout<<"Yes"<<endl;
	        else
	            cout<<"No"<<endl;
	    } else
	        cout<<"No"<<endl;
	        
	}
	
	return 0;
}

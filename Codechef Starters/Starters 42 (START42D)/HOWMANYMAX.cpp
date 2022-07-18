#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, count=1;
	    string str;
	    cin>>n;
	    cin>>str;
	    
	    for(int i=0; i<n-2; i++) {
	        if(str[i]=='1' && str[i+1]=='0')
	            count++;
	    }
	    
	    cout<<count<<endl;
	}
	
	return 0;
}

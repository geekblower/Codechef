#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    long long n, k;
	    cin>>n>>k;
	    
	    if(k==1) {
	        if(n%2)
	            cout<<"ODD"<<endl;
	        else
	            cout<<"EVEN"<<endl;
	    } else {
	        if(k==2)
	            cout<<"ODD"<<endl;
	        else
	            cout<<"EVEN"<<endl;
	    }
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b, m;
	    cin>>a>>b>>m;
	    
	    if(a<b)
	        cout<<min(b-a, m-b+a)<<endl;
	    else
	        cout<<min(a-b, m-a+b)<<endl;
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    
	    vector<int> opn(n,0);
	    vector<int> cls(n,0);
	    
	    for(int i=0; i<n; i++) {
	        if(str[i] == '(')
	            opn[i]++;
	        if(i)
	            opn[i] += opn[i-1];
	    }
	    
	    int ans = n+1;
	    
	    for(int i=n-1; i>=0; i--) {
	        if(str[i] == ')')
	            cls[i]++;
	        if(i<n-1)
	            cls[i] += cls[i+1];
	            
	            int temp = min(opn[i], cls[i]);
	            ans = min(ans, n-2*temp);
	    }
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}

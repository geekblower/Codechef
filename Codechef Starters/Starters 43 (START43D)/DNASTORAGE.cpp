#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	    string str, ans;
	    cin>>str;
	    for(int i=0, j=0; i<n; i+=2, j++) {
	        if(str[i]=='1' && str[i+1]=='1')
	            ans.push_back ('G');
	        else if(str[i]=='1' && str[i+1]=='0')
	            ans.push_back ('C');
	        else if(str[i]=='0' && str[i+1]=='1')
	            ans.push_back ('T');
	        else
	            ans.push_back ('A');
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}

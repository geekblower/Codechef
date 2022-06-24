#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<int> ans;
	for(int i=1; i<=n; i++) {
	    if(n%i==0)
	        ans.push_back (i);
	}
	cout<<ans.size()<<endl;
	for(auto x:ans)
	    cout<<x<<" ";
	    
	return 0;
}
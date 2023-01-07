#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    long long n;
	    cin >> n;
	    vector<long long> a(n), b(n);
	    
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    
	    for(int i=0; i<n; i++)
	        cin>>b[i];
	    
	    map <long long, long long> mp;
	    long long ans = 0;
	    
	    for(int i=0; i<n; i++) {
	        long long u = a[i] ^ b[i];
	        ans += mp[u];
	        mp[u]++;
	    }
	    
	    cout << ans << "\n";
	}
	
	return 0;
}

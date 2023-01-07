#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	vector<long long> power;
	power.push_back (1);
	long long M = 1000000007;
	for(long long i=0; i<1000010; i++) {
	    long long x = power[power.size()-1]*2;
	    x %= M;
	    power.push_back (x);
	}
	
	while(t--) {
	    long long n, x;
	    cin>>n>>x;
	    long long res = (power[n-1]*x) % M;
	    cout<<res<<endl;
	}
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<long long> price;
	for(int i=0; i<n; i++) {
	    int a;
	    cin>>a;
	    price.push_back (a);
	}
	sort(price.begin(), price.end());
	
	long long max_rev = INT_MIN;
	for(int i=0; i<n; i++) {
	    long long temp = price[i] * (n-i);
	    if(temp > max_rev)
	        max_rev = temp;
	}
	
	cout<<max_rev;
	return 0;
}

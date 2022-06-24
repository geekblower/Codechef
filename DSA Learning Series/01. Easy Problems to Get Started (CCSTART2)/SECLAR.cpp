#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
	int a, b, c;
	cin>>a>>b>>c;
	
	if((a>b && a<c) || (a<b && a>c))
	    cout<<a;
	else if((b>c && b<a) || (b>a && b<c))
	    cout<<b;
	else
	    cout<<c;
	*/
	
	vector<int> num;
	for(int i=0; i<3; i++) {
	    int a;
	    cin>>a;
	    num.push_back (a);
	}
	sort(num.begin(), num.end());
	cout<<num[1];
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long odd=0, even=0;
	
	for(int i=1, j=2; n>0; i+=2, j+=2, n--) {
	    odd += i;
	    even += j;
	}
	
	cout<<odd<<" "<<even;
	return 0;
}

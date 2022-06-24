#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long sum;
	while(n) {
	    sum += n;
	    n--;
	}
	cout<<sum;
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int i, count=0;
	    cin >> i;
	    while(i) {
	        if(i%10 == 4)
	            count++;
	        i /= 10;
	    }
	    cout << count<< endl;
	}
	return 0;
}
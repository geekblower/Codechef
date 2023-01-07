#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
	    int A,B;
	    cin>>A>>B;
	    if(A*10 > B*5)
	        cout<<"FIRST"<<endl;
	    else if(A*10 < B*5)
	        cout<<"SECOND"<<endl;
	    else
	        cout<<"ANY"<<endl;
	}
	return 0;
}

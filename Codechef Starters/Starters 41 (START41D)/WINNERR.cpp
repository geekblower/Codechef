#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int pa, pb, qa, qb;
	    cin>>pa>>pb>>qa>>qb;
	    
	    if(pa < pb)
	        pa = pb;
	    if(qa < qb)
	        qa = qb;
	    
	    if(pa < qa)
	        cout<<"P"<<endl;
	    else if(pa > qa)
	        cout<<"Q"<<endl;
	    else
	        cout<<"TIE"<<endl;
	}
	
	return 0;
}

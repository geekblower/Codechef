#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int act, laddu=0;
	    string origin;
	    cin>>act>>origin;
	    
	    while(act--) {
	        string str;
	        cin>>str;
	        
	        if(str == "TOP_CONTRIBUTOR")
	            laddu += 300;
	        else if(str == "CONTEST_HOSTED")
	            laddu += 50;
	        else if(str == "CONTEST_WON") {
	            int rank;
	            cin>>rank;
	            laddu += 300;
	            rank = (rank<20) ? 20-rank : 0;
	            laddu += rank;
	        } else {
	            int severity;
	            cin>>severity;
	            laddu += severity;
	        }
	    }
	    
	    if(origin == "INDIAN")
	        cout<<laddu/200<<endl;
	    else
	        cout<<laddu/400<<endl;
	}
	
	return 0;
}
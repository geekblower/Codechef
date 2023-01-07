#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int sum1=0, sum2=0, lead=0, count1=0, count2=0;
	
	while(n--) {
	    int p1, p2;
	    cin>>p1>>p2;
	    sum1 += p1;
	    sum2 += p2;
	    
	    if(sum1>sum2) {
	        int temp = sum1 - sum2;
	        if(temp > lead)
	            lead = temp;
	        count1++;
	    } else {
	        int temp = sum2 - sum1;
	        if(temp > lead)
	            lead = temp;
	        count2++;
	    }
	}
	
	if(count1>count2)
	    cout<<"1 "<<lead;
	else
	    cout<<"2 "<<lead;
	
	return 0;
}
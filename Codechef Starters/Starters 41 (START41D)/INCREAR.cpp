#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int x, y, count=0;
        cin>>x>>y;
        
        while(x!=y) {
            if(x<y) {
                int t = y-x;
                count += t;
                x += t;
            }
            
            if(y<x) {
                if(x-y == 1) {
                    y += 2;
                    count++;
                } else {
                    int t = (x-y)/2;
                    count += t;
                    t *= 2;
                    y += t;
                }
            }
        }
        
        cout<<count<<endl;
    }
    
	return 0;
}

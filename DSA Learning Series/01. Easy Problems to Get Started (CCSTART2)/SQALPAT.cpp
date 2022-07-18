#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count = 1;
    
    for(int i=1; i<=n; i++) {
        if(i&1) {
            // Odd line
            int temp = 5;
            while(temp) {
                cout<<count<<" ";
                count++;
                temp--;
            }
            cout<<endl;
            count -= 1;
        } else {
            // Even line
            int temp = count+5;
            while(temp>count) {
                cout<<temp<<" ";
                temp--;
            }
            cout<<endl;
            count += 6;
        }
    }
    
	return 0;
}

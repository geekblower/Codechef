#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c) == 180)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    
    return 0;
}
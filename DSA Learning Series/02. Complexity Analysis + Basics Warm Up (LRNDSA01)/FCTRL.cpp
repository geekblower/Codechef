#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin>>t;
    
    while(t--) {
        ll n, count=0;
        cin>>n;
        
        while(n) {
            n /= 5;
            count += n;
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}
//Author: Akash Gautam (@geekblower)
//Date: 03-08-2022
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define GEEKBLOWER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define TEST_CASES create(t);while(t--)
#define SOLUTION solve(); return 0;
#define display(n) cout<<n<<endl;
#define VI vector<int>
#define PB push_back
#define ALL(a) a.begin(),a.end()
#define SORT(a) sort(ALL(a));
#define loop(i,a,b,c) for(int i=a;i<b;i+=c)
#define revloop(i,a,b,c) for(int i=a;i>=b;i-=c)
#define start_loop loop(i,0,n,1)
#define start_revloop revloop(i,n,0,1)
#define create(n) int n;cin>>n;
#define def(a,n) int a[n];start_loop cin>>a[i];
#define print(a) for(auto i : a){cout<<i<<" ";}cout<<endl;
#define vector(a,n) VI a;loop(i,0,n,1){int x;cin>>x;a.PB(x);}
inline int GCD(int a,int b){return !b?a:GCD(b,a%b);}
const int MOD = 1000000007;

void solve() {
    create(n)
    create(x)
    create(y)
    
    vector(arr,n)
    int answer=0;
    
    if(x<=y) {
        int maximum = *max_element(ALL(arr));
        
        if(maximum<=0)
            display("0")
        else
            display((maximum+y-1)/y)
    } else {
        start_loop
            arr[i] = max(arr[i], 0ll);
        
        int ded=0;
        
        revloop(i, n-1, 0, 1) {
            arr[i] -= ded;
            arr[i] = max(arr[i], 0ll);
            
            int times = (arr[i]+x-1)/x;
            ded += y*times;
            answer += times;
        }
        
        display(answer)
    }
}

int32_t main() {
    GEEKBLOWER
    TEST_CASES
    SOLUTION
}

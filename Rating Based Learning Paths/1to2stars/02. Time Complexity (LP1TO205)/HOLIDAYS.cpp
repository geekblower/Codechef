//Author: Akash Gautam (@geekblower)
//Date: 09-01-2023
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
#define SORT(a) sort(ALL(a))
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
    create(w)
    def(arr, n)
    
    sort(arr, arr+n);
    //cout<<"Step 1\n";
    revloop(i, n-1, 0, 1) {
        //cout<<"For i : "<<i<<" -> w = "<<w<<endl;
    //cout<<"Step 2\n";
    w -= arr[i];
        if(w <= 0) {
            display(i)
            return;
        }
        
        
    }
    
    display(0)
}

int32_t main() {
    GEEKBLOWER
    TEST_CASES
    SOLUTION
}

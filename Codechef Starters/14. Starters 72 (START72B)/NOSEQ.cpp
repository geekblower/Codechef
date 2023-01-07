//Author: Akash Gautam (@geekblower)
//Date: 12-07-2022
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

int binpow(int a, int b) {
    if(b==0) {
        return 1;
    }
    
    int res = binpow(a, b/2);
    
    return (b%2 == 1) ? res*res*a : res*res;
}

void solve() {
    create(n)
    create(k)
    create(s)
    VI ans;
    
    int sum = s;
    bool flag = 1;
    
    start_loop {
        int rem = s%k;
        
        if(rem!=0 && rem!=1 && rem!=k-1) {
            display(-2)
            return;
        }
        
        if(k!=2 && s%k==k-1) {
            rem= -1;
        }
        
        ans.PB (rem);
        s = (s-rem)/k;
    }
    
    s=0;
    
    start_loop {
        s += ans[i] * binpow(k,i);
    }
    
    if(sum!=s) {
        display(-2)
    } else {
        for(auto i:ans) {
            cout<<i<<' ';
        }
        
        cout<<'\n';
    }
}

int32_t main() {
    GEEKBLOWER
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    TEST_CASES
    SOLUTION
}
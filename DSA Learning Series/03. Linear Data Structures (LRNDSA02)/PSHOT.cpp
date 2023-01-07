//Author: Akash Gautam (@geekblower)
//Date: 26-06-2022
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define GEEKBLOWER ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
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
const int MOD = 1e9+7;

void solve() {
    create(n)
    string str;
    cin>>str;
    
    int count1=0, count2=0;
    int rem1=n, rem2=n;
    int i=0;
    n*=2;
    
    while(i<n) {
        // Remaining goals after this shot of each team
        if(i%2==0)
            rem1--;
        else
            rem2--;
        
        // When goal is scored
        if(str[i] == '1') {
            if(i%2==0)              // Goal by team A
                count1++;
            else                    // Goal by team B
                count2++;
        }
        
        // If the goal difference is more than the remaining shots of another team then one is winner
        if((count1-count2) > rem2)
            break;
        if(count2-count1 > rem1)
            break;
        
        i++;
    }
    
    // For the edge case where result is declared on the last(2*Nth) goal
    i = (i==n) ? i-1 : i;
    
    display(i+1)
}

int32_t main() {
    GEEKBLOWER
    TEST_CASES
    SOLUTION
}

// solved - https://www.codechef.com/LTIME88B/problems/WATMELON
#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define all(x) x.begin(), x.end()
#define fin(a, n) for(auto i = 0 ; i < n; i++)cin >> a[i];
double nthRoot(ll n, ll x){return pow(x,(double)(1.0/x)*(double)(log(n)/log(x)));}

using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin>>n;
        int sum=0 ,a[n];
        for(auto i=0;i<n;i++){
          cin>>a[i];
          sum+=a[i];
        }
        if(sum>=0)cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
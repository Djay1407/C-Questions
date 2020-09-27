//solved - https://codeforces.com/contest/1406/problem/A
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
        int n,a,max=0,p=0, ans=0;
        cin>>n;
        map<int,int> m;
        for(auto i=0;i<n;i++){
          cin>>a;
          if(max<a)max=a;
          m[a]++;
        }
        for(auto i=0;i<=max+1;i++){
          if(m[i]!=0)m[i]--;
          else if(m[i]==0){
              ans+=i;
              break;
          }
        }
        // cout<<ans;
        for(auto i=0;i<=max+1;i++){
          if(m[i]!=0)m[i]--;
          else if(m[i]==0){
              ans+=i;
              break;
          }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
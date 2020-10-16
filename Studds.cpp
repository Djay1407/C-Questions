//solved -https://www.codechef.com/problems/SC_02
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
        ll n,flag=0,numnq=0;
        cin>>n;
        ll b[n],g[n];
        fin(b,n);
        fin(g,n);
        sort(b,b+n);
        sort(g,g+n);
        while(b[numnq]==g[numnq]&&numnq<=n)numnq++;
        if(numnq==n){cout<<"YES"<<"\n";continue;}
        if(b[numnq]<g[numnq]){
            for(auto i=1;i<n;i++){
              // cout<<"a";
              // cout<<b[i]<<":"<<g[i]<<" ";
              
              if(b[i]>g[i]||b[i]<g[i-1])
              {flag=1;
              break;
              }
            }
        }
        else if(b[numnq]>g[numnq]){
          
            for(auto i=1;i<n;i++){
              // cout<<"b";
              // cout<<g[i]<<":"<<b[i]<<" ";
              if(b[i]<g[i]||g[i]<b[i-1])
              {
              flag=1;
              break;
              }
            }
        }
        if(!flag)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}

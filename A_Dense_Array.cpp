//Solved
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
        ll a[n],x,y,count=0;
        fin(a,n);
        // x=min(a[0],a[1]);
        // y=x;
        for(auto i=0;i<n-1;i++){
         if(min(a[i],a[i+1])*2<max(a[i],a[i+1])){
        //  cout<<log2(max(a[i],a[i+1])/min(a[i],a[i+1]))/1<<" "<<i<<"\n";
          count+=log2((max(a[i],a[i+1])-1)/min(a[i],a[i+1]))/1;
         }
        }   
        cout<<count<<"\n";
    }
    return 0;
}
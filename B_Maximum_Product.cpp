//solved - https://codeforces.com/contest/1406/problem/B
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
        ll n,ans=1;
        cin>>n;
        ll a[n],m[10],start=n-5,cp=n-1,cn=0;
        fin(a,n);
        sort(a,a+n);


        for(auto i=0;i<10;i++){
            ans=1;
           ll s=start+i;
          for(auto j=0;j<5;j++){
            ans*=a[(j+s)%n];
          }
          m[i]=ans;
          
        }

        // for(auto i=4;i>=0;i--){
        //     if((abs(a[cn])>=a[cp]||ans<0)){
        //         if(i==0){
        //             if(ans*a[cp]>ans*a[cn])
        //             goto x;
        //         }
        //         ans*=a[cn];
        //         cn++;
        //         // cout<<ans<<":";
        //         continue;
        //     }
        //   if(a[cp]>=abs(a[cn])){
        //       x:
        //       ans*=a[cp];
        //       cp--;
        //     //   cout<<ans<<":";
        //       continue; 
        //   }
        //   if(a[cp--]>0)ans*=a[cp];
        // }
        cout<<*max_element(m,m+10)<<"\n";
    }
    return 0;
}
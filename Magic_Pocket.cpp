//solved - https://www.codechef.com/problems/SC_04
#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define all(x) x.begin(), x.end()
#define fin(a, n) for(auto i = 0 ; i < n; i++)cin >> a[i];
double nthRoot(ll n, ll x){return pow(x,(double)(1.0/x)*(double)(log(n)/log(x)));}

using namespace std;

int main()
{

    ll k,a,b,bs=1;
    cin>>k>>a>>b;
    ll kk=k;
    if(a+1>=b||k<=a)cout<<k+1<<"\n";
    else
    {   
        k-=a-1;
        bs=a;
        bs+=(k/2)*(b-a);
        if(k%2!=0)bs++;
        cout<<bs<<"\n";
    }

    

    return 0;
}
//solved - https://www.codechef.com/SCAT2020/problems/SC_05
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
        string n;
        cin>>n;
        char n2[n.size()+1];
        int sz=n.size(),pos=0;
        for(auto i=sz-1;i>=0;i--){
           n2[i]='0'; 
          if(n[i]=='7'){
              n2[i]='1';
              n[i]='6';
              pos=i;
          }
          
        }
        for(auto i=pos; i<sz;i++){
            cout<<n2[i];
        }
        cout<<" "<<n<<"\n";
    }   
    return 0;
}

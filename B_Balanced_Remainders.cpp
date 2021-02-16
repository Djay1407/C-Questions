//Solved
#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define all(x) x.begin(), x.end()
#define fin(a, n) for(auto i = 0 ; i < n; i++)cin >> a[i];
double nthRoot(ll n, ll x){return pow(x,(double)(1.0/x)*(double)(log(n)/log(x)));}
bool cube(ll n) {
	ll l = 1LL, r = n;
	while(l <= r) {
		ll m = (l+r) / 2LL;
		ll t = m*m*m;
		if(t == n) return true;
		if(t < n) l = m+1LL;
		else r = m-1LL;
	}
	return false;
}

using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >>n;
        int a[n],avg,cnt=0;
        vector<int> b(3,0);
        for(auto i=0;i<n;i++){
          cin>>a[i];
          b[a[i]%3]+=1;
        }
        avg=(b[0]+b[1]+b[2])/3;

        for(auto i=0;i<3;i++){
          b[i]-=avg;
        }
        for(auto i=0;i<n;i++){
          if(b[0]>0){
              if(b[1]<0){
                  cnt++;
                  b[0]--;
                  b[1]++;
                }
                else if(b[2]<0)
                {
                    cnt++;
                    cnt++;
                  b[0]--;
                  b[2]++;
                }
          }
          else if(b[1]>0){
              if(b[2]<0){
                  cnt++;
                  b[1]--;
                  b[2]++;
                }
                else if(b[0]<0)
                {
                    cnt++;
                    cnt++;
                  b[1]--;
                  b[0]++;
                }
          }
          else if(b[2]>0){
              if(b[0]<0){
                  cnt++;
                  b[2]--;
                  b[0]++;
                }
                else if(b[1]<0)
                {
                    cnt++;
                    cnt++;
                  b[2]--;
                  b[1]++;
                }
          }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
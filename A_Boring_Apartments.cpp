//solved - https://codeforces.com/contest/1433/problem/A
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
        ll apt,num,digitsarr[4]={1,3,6,10},digits=0;
        cin>>apt;
        num=apt%10;
        while(apt){
            apt/=10;
            digits++;
        }
        // cout<<":"<<num<<" "<<digits<<";";
        cout<<(num-1)*digitsarr[3]+digitsarr[digits-1]<<"\n";

    }
    return 0;
}
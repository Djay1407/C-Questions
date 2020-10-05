// solved -https://www.codechef.com/LTIME88B/problems/ROOTTREE
#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define all(x) x.begin(), x.end()
#define fin(a, n)                \
    for (auto i = 0; i < n; i++) \
        cin >> a[i];
double nthRoot(ll n, ll x)
{
    return pow(x, (double)(1.0 / x) * (double)(log(n) / log(x)));
}

using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll a[n], b;
        map<ll, ll> node;
        for (auto i = 0; i < n-1; i++)
        {
            cin >> a[i] >> b;
            node[b]++;
            // cout<<a[i]<<":"<<b<<"="<<node[b]<<" ";
        }
        ll c = -1, sum = 0;
        sort(a,a+n-1);
        for (auto i = 0; i < n-1; i++)
        {
            // cout<<a[i]<<":"<<node[b]<<" ";
            
            if (c != a[i])
            {

                c = a[i];
                if (node[c] == 0)
                {   
                    // cout<<a[i]<<":"<<node[c]<<" ";
                    sum++;
                }
            }
        }
        if(sum!=0)cout << sum - 1 << "\n";
        else cout<<sum<<"\n";
    }
    return 0;
}
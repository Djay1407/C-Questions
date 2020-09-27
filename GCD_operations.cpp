// solved - https://www.codechef.com/LTIME88B/problems/GCDOPS
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
    {   int n;
        cin >> n;
        int b[n], flag = 1;
        for (auto i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (auto i = 0; i < n; i++)
        {
            if (b[i] != i + 1)
            {
                // if (b[i] > i + 1)
                // {
                //     flag = 0;
                //     break;
                // }
                // else 
                if (__gcd(b[i], i + 1) != b[i])
                {
                    // cout << b[i];
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else if (!flag)
            cout << "NO\n";
    }

    return 0;
}
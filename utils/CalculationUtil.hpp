#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll fact(int N)
{
    ll ret = 1;
    for (int i = 1; i <= N; i++) ret *= i;
    return ret;
}

ll C(ll a, ll b)
{
    ll ret = 1;
    for (ll i = b+1; i <= a; i++) ret *= i;
    ret /= fact(a-b);
    return ret;
}

ll H(ll a, ll b) { return C(a+b-1, a); }

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll C(ll a, ll b)
{
    ll ret = 1;
    for (ll i = b+1; i <= a; i++) ret *= i;
    for (ll i = 1; i <= a-b; i++) ret /= i;
    return ret;
}

ll H(ll a, ll b) { return C(a+b-1, a); }

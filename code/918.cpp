// Author: Byeonggyu Park
// Created on 2025/02/09 00:49
// Answer: -6999033352333308
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    // S(2n) = 4-an
    // S(10^12) = S(2^12 * 244140625)
    // 4 - 2^10 * a244140625
    ll sz = 244140625;
    vector<ll> dp(sz+1, 0);
    dp[1]=1;
    for (int i = 2; i < sz+1; i++) {
        if (i&1) dp[i] = dp[i/2] - 3 * dp[i/2+1];
        else dp[i] = 2 * dp[i/2];
    }
    ll ans = 4 - 2048 * dp[sz];
    cout << ans;
}
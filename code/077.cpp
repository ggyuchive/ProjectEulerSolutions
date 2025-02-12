// Author: Byeonggyu Park
// Created on 2025/02/09 00:28
// Answer: 71
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;

ll solve(int n) {
    vector<ll> prime = getPrimeNumbers(n);
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i==0) dp[i][j]=1;
            else {
                dp[i][j]=0;
                for (auto p : prime) {
                    if (p <= j && i-p >= 0)
                        dp[i][j] += dp[i-p][p];
                }
            }
        }
    }
    return dp[n][n];
}

int main() {
    int i = 1;
    while (i++) {
        int res = solve(i);
        if (res >= 5000) {
            cout << i; return 0;
        }
    }
}
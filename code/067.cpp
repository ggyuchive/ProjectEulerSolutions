// Author: Byeonggyu Park
// Created on 2025/02/12 22:38
// Answer: 7273
#include <bits/stdc++.h>
#include "../utils/IOUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 100;

int main() {
    string s = getLine(67, true, N);
    int p = 0;
    int arr[N][N];
    int dp[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            arr[i][j] = (s[p]-'0') * 10 + (s[p+1]-'0');
            dp[i][j] = arr[i][j];
            if (j < i)
                dp[i][j] = max(dp[i][j], arr[i][j]+dp[i-1][j]);
            if (j > 0)
                dp[i][j] = max(dp[i][j], arr[i][j]+dp[i-1][j-1]);
            p+=3;
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) ans=max(ans,dp[N-1][i]);
    cout << ans;
}
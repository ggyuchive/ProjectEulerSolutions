// Author: Byeonggyu Park
// Created on 2025/02/09 00:30
// Answer: 427337
#include <bits/stdc++.h>
#include "../utils/IOUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 80;

int main() {
    int arr[N][N];
    string s = getLine(81, true, N);
    int i = 0; int j = 0;
    for (auto& c : s) {
        if (c == ',') {
            j++; continue;
        }
        else if (c == '\n') {
            i++; j=0; continue;
        }
        arr[i][j] *= 10;
        arr[i][j] += (c-'0');
    }
    ll dp[80][80];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i+j == 0) dp[i][j] = arr[i][j];
            else if (i > 0 && j == 0) dp[i][j] = arr[i][j] + dp[i-1][j];
            else if (j > 0 && i == 0) dp[i][j] = arr[i][j] + dp[i][j-1];
            else dp[i][j] = arr[i][j] + min(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[N-1][N-1];
}
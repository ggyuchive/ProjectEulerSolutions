// Author: Byeonggyu Park
// Created on 2025/02/09 00:17
// Answer: 837799
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int getCollatzLength(ll N) {
    int len = 1;
    while (N != 1) {
        if (N&1) N = 3*N+1;
        else N = N/2;
        len++;
    }
    return len;
}

int main() {
    int tmp = 0; int ans;
    for (int i = 1; i < 1000000; i++) {
        int len = getCollatzLength(i);
        if (tmp < len) ans = i, tmp = len;
    }
    cout << ans;
}
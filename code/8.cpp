// Author: Byeonggyu Park
// Created on 2025/02/08 23:51
// Answer: 23514624000
#include <bits/stdc++.h>
#include "../utils/IOUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 13;

int main() {
    string s = getLine(8, false, 20);
    ll ans = 0;
    for (int i = 0; i < s.size()-N; i++) {
        ll tmp = 1;
        for (int j = i; j < i+N; j++) {
            tmp *= s[j]-'0';
        }
        ans = max(ans,tmp);
    }
    cout << ans;
}
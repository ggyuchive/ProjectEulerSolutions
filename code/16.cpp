// Author: Byeonggyu Park
// Created on 2025/02/12 23:17
// Answer: 1366
#include <bits/stdc++.h>
#include "../utils/CalculationUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 1000;

int main() {
    string ret = "1";
    string mul = "2";
    for (int i = 0; i < N; i++) {
        ret = bigIntMul(ret, mul);
    }
    int ans = 0;
    for (auto& c : ret) ans+=(c-'0');
    cout << ans;
}
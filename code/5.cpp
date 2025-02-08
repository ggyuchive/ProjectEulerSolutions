// Author: Byeonggyu Park
// Created on 2025/02/07 23:49
// Answer: 232792560
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;

int main() {
    ll ans = 1;
    for (int i = 1; i <= 20; i++) ans = lcm(ans, i);
    cout << ans;
}
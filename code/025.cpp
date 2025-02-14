// Author: Byeonggyu Park
// Created on 2025/02/13 22:38
// Answer: 4782
#include <bits/stdc++.h>
#include "../utils/CalculationUtil.hpp"
using namespace std;
typedef long long ll;

int main() {
    string a = "1";
    string b = "1";
    int ans = 2;
    while (b.size() < 1000) {
        string tmp = b;
        b = bigIntAdd(a, b);
        a = tmp;
        ans++;
    }
    cout << ans;
}
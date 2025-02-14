// Author: Byeonggyu Park
// Created on 2025/02/13 22:42
// Answer: 31626
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 10000;

int main() {
    vector<ll> sumDiv(N, 0);
    vector<bool> isAmicable(N, 0);
    for (int i = 1; i < N; i++) {
        vector<ll> div = getDivisors(i);
        for (auto& num : div)
            sumDiv[i] += num;
        sumDiv[i] -= i;
    }
    for (int i = 1; i < N; i++) {
        if (sumDiv[i] < N && sumDiv[sumDiv[i]] == i && i != sumDiv[i]) {
            isAmicable[i] = true;
            isAmicable[sumDiv[i]] = true;
        }
    }
    int ans = 0;
    for (int i = 1; i < N; i++) {
        if (isAmicable[i]) ans += i;
    }
    cout << ans;
}
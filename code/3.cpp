/*
* Author: Byeonggyu Park
* Created on 2025/02/07 23:46
* Answer: 6857
*/
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;
const ll N = 600851475143;

int main() {
    vector<ll> factor = getprimeFactor(N);
    ll ans = 1;
    for (auto& f : factor) {
        ans = max(ans, f);
    }
    cout << ans;
}
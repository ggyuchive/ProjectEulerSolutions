// Author: Byeonggyu Park
// Created on 2025/02/09 00:01
// Answer: 142913828922
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 2000000;

int main() {
    vector<ll> prime = getPrimeNumbers(N-1);
    ll ans = 0;
    for (auto i : prime) ans+=i;
    cout << ans;
}
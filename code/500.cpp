// Author: Byeonggyu Park
// Created on 2025/02/09 00:48
// Answer: 35407281
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;
const ll mod = 500500507;
const int N = 500500;
const int MAX = 8000000;

int main() {
    vector<ll> prime = getPrimeNumbers(MAX);
    vector<ll> v;
    for (auto num : prime) {
        ll base = num; ll exp = 1;
        while (num <= MAX) {
            v.push_back(num);
            num *= num; exp*=2;
        }
    }
    sort(v.begin(),v.end());
    ll ans = 1;
    for (int i = 0; i < N; i++) {
        ans = (ans * v[i]) % mod;
    }
    cout << ans;
}
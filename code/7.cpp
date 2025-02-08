// Author: Byeonggyu Park
// Created on 2025/02/07 23:54
// Answer: 104743
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;

int main() {
    int N = 10001;
    vector<ll> prime = getPrimeNumbers(1000000);
    cout << prime[N-1];
}
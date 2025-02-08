// Author: Byeonggyu Park
// Created on 2025/02/09 00:07
// Answer: 76576500
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;

int main() {
    ll num = 0; ll pl = 1;
    while (1) {
        num+=pl; pl++;
        if (getDivisorCount(num) > 500) {
            break;
        }
    }
    cout << num;
}
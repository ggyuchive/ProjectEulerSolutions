// Author: Byeonggyu Park
// Created on 2025/02/12 23:14
// Answer: 648
#include <bits/stdc++.h>
#include "../utils/CalculationUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 100;

int main() {
    string ret = "1";
    for (int i = 1; i <= N; i++) {
        int num = i;
        string s;
        while (num) {
            s.push_back(num%10+'0');
            num/=10;
        }
        reverse(s.begin(),s.end());
        ret = bigIntMul(ret, s);
    }
    int ans = 0;
    for (auto& c : ret) ans+=(c-'0');
    cout << ans;
}
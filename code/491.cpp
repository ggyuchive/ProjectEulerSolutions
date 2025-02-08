// Author: Byeonggyu Park
// Created on 2025/02/09 00:44
// Answer: 194505988824000
#include <bits/stdc++.h>
#include "../utils/CalculationUtil.hpp"
using namespace std;
typedef long long ll;

ll perm(vector<int> a, vector<int> b) {
    ll ans = fact(10) * fact(10);
    for (int i = 0; i < 10; i++) {
        ans /= fact(a[i]); ans /= fact(b[i]);
    }
    if (a[0] > 0) {
        ll min = fact(9) * fact(10);
        a[0]--;
        for (int i = 0; i < 10; i++) {
            min /= fact(a[i]); min /= fact(b[i]);
        }
        ans -= min;
    }
    return ans;
} 

int main() {
    int comb = 1; ll ans = 0;
    for (int i = 0; i < 10; i++) comb *= 3;
    for (int i = 0; i < comb; i++) {
        int cmb = i;
        vector<int> v(10, 0);
        for (int j = 0; j < 10; j++) {
            int c = cmb%3; cmb/=3;
            v[j] = c;
        }
        int cnt = 0; int sum = 0;
        for (int i = 0; i < 10; i++) cnt+=v[i], sum+=i*v[i];
        if (cnt == 10 && sum%11 == 1) {
            vector<int> t(10, 0);
            for (int i = 0; i < 10; i++) t[i] = 2-v[i];
            ans += perm(v,t);
        }

    }
    cout << ans;
}
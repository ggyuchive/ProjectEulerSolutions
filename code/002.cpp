// Author: Byeonggyu Park
// Created on 2025/02/07 23:45
// Answer: 4613732
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int f1 = 1; int f2 = 1;
    ll ans = 0;
    while (f2 <= 4000000) {
        int tmp = f2;
        f2 = f1+f2;
        f1 = tmp;
        if (!(f2&1)) ans+=f2;
    }
    cout << ans;
}
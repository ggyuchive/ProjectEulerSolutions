// Author: Byeonggyu Park
// Created on 2025/02/09 00:43
// Answer: 8739992577
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e10;
ll A = 28433; ll B = 7830457;

int main() {
    ll ans = 1;
    while (B--) ans = (ans*2)%mod;
    ans = (ans*A+1)%mod;
    cout << ans;
}
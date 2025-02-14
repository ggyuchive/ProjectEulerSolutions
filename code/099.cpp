// Author: Byeonggyu Park
// Created on 2025/02/14 21:25
// Answer: 709
#include <bits/stdc++.h>
#include "../utils/IOUtil.hpp"
using namespace std;
typedef long long ll;
const int SZ = 1000;

int main() {
    string s = getLine(99, true, SZ);
    struct S {
        int base;
        int exp;
        int line;
    };
    vector<S> v;
    int p = 0;
    for (int i = 0; i < SZ; i++) {
        int base = 0;
        while (s[p] != ',') {
            base = base*10+s[p++]-'0';
        } p++;
        int exp = 0;
        while (p < s.size() && s[p] != '\n') {
            exp = exp*10+s[p++]-'0';
        } p++;
        v.push_back({base, exp, i+1});
    }
    sort(v.begin(),v.end(),[&](S a, S b) {
        return a.exp * log10(a.base) < b.exp * log10(b.base);
    });
    cout << (--v.end())->line;
}
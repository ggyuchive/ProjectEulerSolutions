// Author: Byeonggyu Park
// Created on 2025/02/14 20:47
// Answer: 871198282
#include <bits/stdc++.h>
#include "../utils/IOUtil.hpp"
using namespace std;
typedef long long ll;

int main() {
    string s = getLine(22, false);
    vector<string> v; int p = 0;
    string t;
    for (auto& c : s) {
        if (c == '"') continue;
        if (c == ',') v.push_back(t), t="";
        else t.push_back(c);
    }
    v.push_back(t);
    sort(v.begin(),v.end());
    int c = 0;
    ll ans = 0;
    for (int i = 0; i < v.size(); i++) {
        int mul = 0;
        for (auto& c : v[i]) mul += (c-'A'+1);
        ans += mul * (i+1);
    }
    cout << ans;
}
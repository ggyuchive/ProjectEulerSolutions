// Author: Byeonggyu Park
// Created on 2025/02/07 23:48
// Answer: 906609
#include <bits/stdc++.h>
using namespace std;

bool palin(int num) {
    vector<int> v;
    while (num) {
        v.push_back(num%10); num/=10;
    }
    bool ret = true;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != v[v.size()-1-i]) ret=false;
    }
    return ret;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            if (palin(i*j))
                ans=max(ans,i*j);
        }
    }
    cout << ans;
}
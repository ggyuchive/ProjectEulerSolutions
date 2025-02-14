// Author: Byeonggyu Park
// Created on 2025/02/14 20:59
// Answer: 4179871
#include <bits/stdc++.h>
#include "../utils/NumberTheoryUtil.hpp"
using namespace std;
typedef long long ll;
const int MAX = 28213;

int main() {
    vector<int> abundant;
    for (int i = 1; i < MAX; i++) {
        vector<ll> div = getDivisors(i);
        int sum = -i;
        for (auto i : div) sum+=i;
        if (sum > i) abundant.push_back(i);
    }
    int n = abundant.size();
    vector<bool> poss(MAX+1, false);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (abundant[i]+abundant[j] <= MAX)
                poss[abundant[i]+abundant[j]]=true;
        }
    }
    int ans = 0;
    for (int i = 0; i <= MAX; i++) {
        if (!poss[i]) ans+=i;
    }
    cout << ans;
}
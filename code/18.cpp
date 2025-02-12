// Author: Byeonggyu Park
// Created on 2025/02/12 22:30
// Answer: 1074
#include <bits/stdc++.h>
#include "../utils/IOUtil.hpp"
using namespace std;
typedef long long ll;
const int N = 15;

int main() {
    string s = getLine(18, true, N);
    int p = 0;
    int arr[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            arr[i][j] = (s[p]-'0') * 10 + (s[p+1]-'0');
            p+=3;
        }
    }
    int comb = 1<<(N-1);
    int ans = 0;
    for (int i = 0; i < comb; i++) {
        int cmb = i; int tmp = arr[0][0]; int q = 0;
        for (int j = 1; j < N; j++) {
            q+=cmb%2;
            tmp+=arr[j][q];
            cmb/=2;
        }
        ans = max(ans, tmp);
    }
    cout << ans;
}
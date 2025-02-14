// Author: Byeonggyu Park
// Created on 2025/02/14 21:43
// Answer: 21124
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int digit[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4}; // one ~ nine
int tendigit[10] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8}; // ten ~ nineteen
int twodigit[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6}; // twenty ~ ninety
int hundred = 7;
int thousand = 8;
const int N = 1000;

int main() {
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int prevans = ans;
        if (i >= 1000) ans+=(digit[i/1000]+thousand);
        else if (i >= 100) {
            ans+=(digit[i/100]+hundred);
            if (i%100 > 0) ans+=3; // and
        }
        int p = i%100;
        if (p < 10) ans+=digit[p];
        else if (p < 20) ans+=tendigit[p-10];
        else ans+=(twodigit[p/10]+digit[p%10]);
    }
    cout << ans;
}
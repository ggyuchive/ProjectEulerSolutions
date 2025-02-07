/*
* Author: Byeonggyu Park
* Created on 2025/02/07 23:43
* Answer: 233168
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i = 1; i < 1000; i++) {
        if (i%3==0||i%5==0) ans+=i;
    }
    cout << ans;
}
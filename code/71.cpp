// Author: Byeonggyu Park
// Created on 2025/02/09 00:19
// Answer: 428570
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int D = 1000000;

int main() {
    // solve x/d that 3/7 - x/d -> (3d-7x)/d is minimum
    // maximum d, 3d-7x = 1 -> x = 3d-1 / 7
    for (int d = D; d >= 1; d--) {
        if ((3*d-1) % 7 == 0) {
            int x = (3*d-1)/7;
            cout << x;
            break;
        }
    }    
}
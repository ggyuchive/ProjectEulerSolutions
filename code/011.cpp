// Author: Byeonggyu Park
// Created on 2025/02/09 00:03
// Answer: 70600674
#include <bits/stdc++.h>
#include "../utils/IOUtil.hpp"
using namespace std;
typedef long long ll;

int main() {
    string s = getLine(11, true, 20);
    int arr[20][20]; int p = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            arr[i][j] = (s[p]-'0')*10 + (s[p+1]-'0');
            p+=3;
        }
    }
    int dx[8] = {1,-1,0,0,1,-1,1,-1};
    int dy[8] = {0,0,1,-1,1,-1,-1,1};
    ll ans = 0; pair<int,int> info;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            for (int k = 0; k < 8; k++) {
                int x = i; int y = j;
                ll tmp = 1; bool tag = true;
                for (int a = 0; a < 4; a++) {
                    tmp *= arr[x][y];
                    x+=dx[k]; y+=dy[k];
                    if (x<0||x>=20||y<0||y>=20) {
                        tag=false; break;
                    }
                }
                if (tag) ans = max(ans, tmp);
            }
        }
    }
    cout << ans;
}
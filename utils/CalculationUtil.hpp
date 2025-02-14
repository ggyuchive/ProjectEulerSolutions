#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll fact(int N)
{
    ll ret = 1;
    for (int i = 1; i <= N; i++) ret *= i;
    return ret;
}

ll C(ll a, ll b)
{
    ll ret = 1;
    for (ll i = b+1; i <= a; i++) ret *= i;
    ret /= fact(a-b);
    return ret;
}

ll H(ll a, ll b) { return C(a+b-1, a); }

/*
 * return a+b in string
 * Time Complexity: O(max(|a|,|b|))
 */
string bigIntAdd(string& a, string& b)
{
    string ret;
    reverse(a.begin(),a.end()); reverse(b.begin(),b.end());
    while (a.size() != b.size()) {
        if (a.size() < b.size()) a.push_back('0');
        else b.push_back('0');
    }
    int add = 0;
    for (int i = 0; i < b.size(); i++) {
        int cur = (b[i]-'0') + (a[i]-'0') + add;
        ret.push_back(cur%10+'0');
        add = cur/10;
    }
    if (add > 0) ret.push_back(add+'0');
    reverse(ret.begin(),ret.end());
    return ret;
}

/*
 * return a*b in string
 * Time Complexity: O(|a||b|)
 */
string bigIntMul(string& a, string& b)
{
    string ret = "0";
    for (int i = b.size()-1; i >= 0; i--) {
        char c = b[i];
        string tmp; int add = 0;
        for (int j = a.size()-1; j >= 0; j--) {
            int cur = (a[j]-'0') * (c-'0') + add;
            tmp.push_back(cur%10+'0');
            add = cur/10;
        }
        if (add > 0) tmp.push_back(add+'0');
        reverse(tmp.begin(),tmp.end());
        for (int p = 0; p < b.size()-1-i; p++) tmp.push_back('0');
        ret = bigIntAdd(ret, tmp);
    }
    return ret;
}

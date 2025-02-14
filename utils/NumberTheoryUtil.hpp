#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
 * return gcd/lcm
 * Time Complexity: O(log(min(A,B)))
 */
ll gcd(ll A, ll B) { return B == 0 ? A : gcd(B, A%B); }
ll lcm(ll A, ll B) { return A * (B / gcd(A, B)); }

/*
 * return boolean value if N is prime
 * Time Complexity: O(sqrt(N)) 
 */
bool isPrimeNumber(ll N)
{
    for (ll i = 2; i*i <= N; i++) {
        if (N%i == 0)
            return false;
    }
    return true;
}

/*
 * return prime numbers from 1 to N
 * Time Complexity: O(NlogNlogN)
 */
vector<ll> getPrimeNumbers(ll N)
{
    vector<ll> ret;
    vector<bool> prime(N+1, true);
    for (ll i = 2; i*i <= N; i++) {
        if (prime[i]) {
            for (ll j = i*i; j <= N; j+=i)
                prime[j]=false;
        }
    }
    for (ll i = 2; i <= N; i++) {
        if (prime[i])
            ret.push_back(i);
    }
    return ret;
}

/*
 * return prime factors of N
 * Time Complexity: O(sqrt(N))
 */
vector<ll> getPrimeFactors(ll N)
{
    vector<ll> ret;
    for (ll i = 2; i*i <= N; i++) {
        while (N%i == 0) {
            N/=i;
            ret.push_back(i);
        }
    }
    if (N > 1)
        ret.push_back(N);
    return ret;
}

vector<ll> getDivisors(ll N)
{
    vector<ll> ret;
    for (ll i = 1; i*i <= N; i++) {
        if (N%i == 0) {
            if (i*i == N) ret.push_back(i);
            else ret.push_back(i), ret.push_back(N/i);
        }
    }
    sort(ret.begin(),ret.end());
    return ret;
}

ll getDivisorCount(ll N)
{
    vector<ll> prime_factor = getPrimeFactors(N);
    map<ll,int> mapper;
    for (auto& num : prime_factor)
        mapper[num]++;

    ll ans = 1;
    for (auto [_, exp] : mapper)
        ans *= (exp+1);
    return ans;
}

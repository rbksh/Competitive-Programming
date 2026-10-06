#include <tgmath.h>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pll pair<ll, ll>
#define V vector
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define FORD(i, a, b) for (ll i = a; i > b; i--)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)x.size()
#define el "\n"



void solve() {
    ll a = 14; double b = -3e-2; char c = '@'; string s = "Test String";
    vector<ll> q = {1, 6, 4, 3, 5, 3, 1};
    dbg(a, b, c, "", s, q);
    dbgc("show this on left", make_pair(a, c));  // dbgc = "debug with 1st arg as comment"
    dbgcP("diff colors", a, b);  // uppercase letters change the color; all terminal colors are available
    dbgc("expressions work too", 2*b, gcd(a, a+4));
    el;  // empty line

    // complex/nested data structures work too.
    map<pair<ll,ll>, V<string>> dat = {
        {{3, 5}, {"abc", "def"}},
        {{4, -1}, {"apple", "peach", "banana"}},
        {{-5, 0}, {"tourist", "jiangly", "um_nik", "slime", "ksun48"}}
    };
    dbgY(dat);
    // that may be pretty messy to read all on one line though, so we can use:
    dbg(pdh(dat));
    el;

    // show how "regular output" lines look visibly different from dbg() lines.
    cout << a << ' ' << b << ' ' << c << '\n';

    // what if we have a big object and we want to "get the idea" of its contents
    // without printing the whole thing?
    vector<pll> vbig; FOR(k, 0, 100) {vbig.emplace_back(k, -k*k);}
    dbgR(pdh(vbig, 10));  // short for "print_details_helper"

    el;
    // Advanced: pdhf lets me specify a function, so f(x) will be printed for each x in the structure.
    dbg(pdhf(vbig, [&](auto x){return x.second;}, 5));  // pdhf = "print_details_helper_func"

    dbgcBold("done!");
    return;
}
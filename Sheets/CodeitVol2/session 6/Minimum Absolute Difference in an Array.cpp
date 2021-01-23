// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem

#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits.h>
#include <vector>

using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int t, n, x;
    long long mn = LONG_LONG_MAX;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++) {
        mn = min(mn, (long long) abs(v[i] - v[i + 1]));
        if (!mn) break;
    }
    cout << mn << endl;

    return 0;
}

// https://codeforces.com/contest/363/problem/B

#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits.h>
#include <string>

using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int pref[2 * 100000];

int main() {
    fast();
    int index, mn = INT_MAX;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }

    for (int i = 1; i <= n - (k - 1); i++) {
        if (pref[i + (k - 1)] - pref[i - 1] < mn) {
            index = i;
            mn = pref[i + (k - 1)] - pref[i - 1];
        }
    }
    cout << index << endl;
    return 0;
}
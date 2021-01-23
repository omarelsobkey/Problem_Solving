// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>


using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

long long pref[100009];

int main() {
    fast();
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }
    int a, b;
    while (t--) {
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << endl;
    }
    return 0;
}
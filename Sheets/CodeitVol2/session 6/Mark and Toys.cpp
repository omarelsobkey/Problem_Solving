// https://www.hackerrank.com/challenges/mark-and-toys/problem

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
    int n, k, x;
    vector<int> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    x = 0;
    for (int i = 0; i < n && v[i] <= k; i++) {
        x++;
        k -= v[i];
    }
    cout << x << endl;
    return 0;
}

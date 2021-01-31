// https://codeforces.com/contest/812/problem/C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long n, price, money;
vector<long long> v, cost;

bool can(long long mid) {
    long long cost2 = 0;
    for (int i = 0; i < n; i++) cost[i] = v[i] + (i + 1) * mid;
    sort(cost.begin(), cost.end());
    for (int i = 0; i < mid; i++) cost2 += cost[i];

    if (cost2 > money) return 0;
    price = cost2;
    return 1;
}

int main() {
    fast();

    cin >> n >> money;
    v.resize(n);
    cost.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    long long lo = 0, hi = n + 1, mid, counter = 0;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (can(mid)) {
            counter = mid;
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    cout << counter << " " << price << endl;

    return 0;
}
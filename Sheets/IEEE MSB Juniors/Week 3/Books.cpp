// https://codeforces.com/contest/279/problem/B

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
#define endl '\n';

vector<long long> arr(1);
long long n, t;

bool can(int mid) {
    for (int i = 0; i <= n - mid; i++) {
        if (arr[i + mid] - arr[i] <= t) return 1;
    }
    return 0;
}

int main() {
    cin >> n >> t;
    arr.resize(n + 1);
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    int lo = 0, hi = n, mid;
    while (lo < hi) {
        mid = (lo + hi + 1) / 2;
        if (can(mid)) lo = mid;
        else hi = mid - 1;
    }
    cout << lo << endl;
    return 0;
}
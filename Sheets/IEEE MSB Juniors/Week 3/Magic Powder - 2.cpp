// https://codeforces.com/contest/670/problem/D2

#include <iostream>
#include <cmath>

using namespace std;
#define endl '\n';

long long *a, *b;
long long n, k;

bool can(long long mid) {
    long long magic = k;
    long long required = 0;
    for (int i = 0; i < n; i++) {
        required = mid * a[i] - b[i];
        required = max((long long) 0, required);
        if (required > magic) return false;
        else magic -= required;
    }
    return true;
}

int main() {
    cin >> n >> k;
    a = new long long[n];
    b = new long long[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long lo = 0, hi = 1e10, mid;
    while (hi > lo) {
        mid = (lo + hi+1) / 2;
        if (can(mid)) lo = mid;
        else hi = mid - 1;
    }
    cout << lo << endl;
    return 0;
}
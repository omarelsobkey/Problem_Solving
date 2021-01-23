// https://codeforces.com/gym/101257/problem/D

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
#define endl '\n';

int main() {
    
    
long long n, x, y;
    cin >> n >> x >> y;

    long long bestTime;
    // the range is time
    long long lo = 0, hi = 1e18, mid;
    while (hi - lo != 1 && hi > lo) {
        mid = (lo + hi + 1) / 2;
        if (mid / x + mid / y >= n) {
            hi = mid;
            bestTime = __min(bestTime, mid);
        } else lo = mid;
    }
    cout << bestTime << endl;
    return 0;
}
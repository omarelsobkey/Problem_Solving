// https://codeforces.com/contest/371/problem/C

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
#define endl '\n';

string x;
long long must[3];
long long quantity[3];
long long price[3];
long long money;

bool can(long long mid) {
    long long moneyCopy = money;
    long long quantityNeeded;
    for (int i = 0; i < 3; i++) {
        quantityNeeded = mid * must[i] - quantity[i];
        quantityNeeded = __max(quantityNeeded, 0);
        if (quantityNeeded * price[i] > moneyCopy) return 0;
        moneyCopy -= quantityNeeded * price[i];
    }
    return 1;
}

int main() {
    cin >> x;
    for (char i :x) {
        if (i == 'B') must[0]++;
        else if (i == 'S') must[1]++;
        else must[2]++;
    }

    for (long long &i : quantity) cin >> i;
    for (long long &i : price) cin >> i;
    cin >> money;

    long long lo = 0, hi = 1e14, mid;
    while (lo < hi) {
        mid = (lo + hi + 1) / 2;
        if (can(mid)) lo = mid;
        else hi = mid - 1;
    }
    cout << lo << endl;
    return 0;
}
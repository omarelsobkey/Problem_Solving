// https://codeforces.com/contest/433/problem/B

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long unSorted[100001], sorted[100001];

int main()
{
    int n, m, type, l, r;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> unSorted[i];
        sorted[i] = unSorted[i];
    }
    sort(sorted, sorted + n + 1);
    for (int i = 1; i <= n; i++) {
        unSorted[i] += unSorted[i - 1];
        sorted[i] += sorted[i - 1];
    }

    cin >> m;
    while (m--) {
        cin >> type >> l >> r;
        if (type == 1)
            cout << unSorted[r] - unSorted[l - 1] << endl;
        else if (type == 2)
            cout << sorted[r] - sorted[l - 1] << endl;
    }
    return 0;
}
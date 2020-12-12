// https://codeforces.com/contest/136/problem/A

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

int main() {
    fast();
    int arr[105], n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        arr[x] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i];
        if (i == n) cout << endl;
        else cout << " ";
    }
    return 0;
}
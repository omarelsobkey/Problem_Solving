// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X

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

int main() {
    fast();
    bool print = 1;
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    for (int i = x - 2; i < x + 1; i++) {
        for (int j = y - 2; j < y + 1; j++) {
            if (i < 0) {
                i = 0;
            }
            if (j < 0) {
                j = 0;
            }
            if (i >= n || j >= m || (i == x - 1 && j == y - 1)) {
                continue;
            }

            if (arr[i][j] != 'x') {
                print = false;
                break;
            }
        }
        if (!print) { break; }
    }

    if (print) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/F

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int ra, ca, rb, cb;
    cin >> ra >> ca;
    vector<vector<int>> a(ra);
    for (int i = 0; i < ra; i++) {
        a[i].resize(ca);
        for (int j = 0; j < ca; j++) {
            cin >> a[i][j];
        }
    }

    cin >> rb >> cb;
    vector<vector<int>> b(rb);
    for (int i = 0; i < rb; i++) {
        b[i].resize(cb);
        for (int j = 0; j < cb; j++) {
            cin >> b[i][j];
        }
    }

    int cell = 0;
    for (int i = 0; i < ra; i++) {
        for (int k = 0; k < cb; k++) {
            cell = 0;
            for (int j = 0; j < ca; j++) {
                cell += a[i][j] * b[j][k];
            }
            cout << cell;
            if (k == cb - 1) cout << endl;
            else cout << " ";
        }
    }
    return 0;
}
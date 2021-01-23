// https://codeforces.com/contest/660/problem/C

#include <iostream>
#include <map>

using namespace std;
#define endl '\n';

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int n, k, output = 0, size = 0, outputIndex;

    cin >> n >> k;

    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int p1 = 0, p2 = 0, help = k;
    while (p1 < n && p2 < n) {
        while (p2 < n) {
            if (a[p2] == 0 && help > 0) help--;
            else if (a[p2] == 0 && help == 0) break;
            p2++;
            size++;
        }
        if (size > output) {
            output = size;
            outputIndex = p1;
        }
        while (help == 0 && p1 < n) {
            if (a[p1] == 0) help++;
            p1++;
            size--;
        }
    }

    cout << output << endl;
    for (int i = 0; i < n; i++) {
        if (i >= outputIndex) {
            if (a[i] == 0 && k > 0) {
                cout << 1;
                k--;
            } else cout << a[i];
        } else {
            cout << a[i];
        }

        if (i == n - 1) cout << endl
        else cout << " ";
    }
    return 0;
}
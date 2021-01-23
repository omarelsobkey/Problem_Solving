// https://codeforces.com/contest/961/problem/B

#include <iostream>

using namespace std;
#define endl '\n';

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    long long n, k, sum = 0, help = 0, output = 0;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] == 1) {
            sum += a[i];
            a[i] = 0;
        }
    }

    int p1 = 0, p2 = p1 + k;
    for (int i = 0; i < k; i++) {
        help += a[i];
    }
    output = max(output, sum + help);
    while (p2 < n) {
        help = help + a[p2] - a[p1];
        output = max(output, sum + help);
        p1++;
        p2++;
    }

    cout << output << endl;
    return 0;
}
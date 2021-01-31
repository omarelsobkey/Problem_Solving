// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
#define endl '\n';

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int n, q, t = 1, x;
    int *a;
    while (cin >> n >> q && n != 0 && q != 0) {
        a = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);

        cout << "CASE# " << t << ":\n";
        while (q--) {
            cin >> x;
            auto pos = lower_bound(a, a + n, x);
            if (pos != a + n && *pos == x) {
                cout << x << " found at " << pos - a + 1 << endl;
            } else cout << x << " not found\n";
        }
        t++;
    }
    return 0;
}
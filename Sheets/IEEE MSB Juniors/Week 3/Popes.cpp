// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=898

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int years, n, counter, mn, mx;
    vector<int> v;

    while (cin >> years >> n) {
        v.resize(n);
        counter = 0;
        for (int i = 0; i < n; i++) cin >> v[i];

        int p1 = 0, p2 = 0;
        while (p1 < n) {
            if (v[p2] <= v[p1] + years - 1 && p2 - p1 + 1 > counter) {
                counter = p2 - p1 + 1;
                mn = v[p1];
                mx = v[p2];
            }

            if (p2 + 1 < n && v[p2] <= v[p1] + years - 1) {
                p2++;
            } else {
                p1++;
            }
        }

        cout << counter << " " << mn << " " << mx << endl;
    }
    return 0;
}


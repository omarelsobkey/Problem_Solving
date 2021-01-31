// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1282

#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int p, q, r, s, t, u;

int can(double mid) {
    long long out = (p / exp(mid) +
                     q * sin(mid) +
                     r * cos(mid) +
                     s * tan(mid) +
                     t * pow(mid, 2) + u) * 1e7;

    if (out == 0) return 1;
    else if (out > 0) return 0;
    else return -1;
}

int main() {
    fast();

    while (cin >> p >> q >> r >> s >> t >> u) {
        double output = -1;
        double lo = 0, hi = 1, mid;
        for (int i = 0; i < 50; i++) {
            mid = (lo + hi) / 2;
            int ans = can(mid);
            if (ans == 1) {
                output = mid;
                lo = mid;
            } else if (ans == 0) {
                lo = mid;
            } else {
                hi = mid;
            }
        }

        if (output != -1) {
            cout << fixed << setprecision(4) << output << endl;
        } else
            cout << "No solution\n";
    }
    return 0;
}

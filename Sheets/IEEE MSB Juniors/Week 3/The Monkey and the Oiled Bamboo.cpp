// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3183

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int t, n;
vector<int> v;

bool can(int mid) {
    for (int i = 1; i <= n; i++) {
        if (mid == v[i] - v[i - 1]) mid--;
        else if (mid < v[i] - v[i - 1]) return 0;
    }
    return 1;
}


int main() {
    fast();


    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        v.resize(n + 1);
        v[0] = 0;
        for (int i = 1; i <= n; i++) cin >> v[i];

        int lo = 0, hi = 1e9, mid;
        while (lo < hi) {
            mid = (lo + hi ) / 2;
            if (can(mid)) {
                hi = mid;
            } else
                lo = mid + 1;
        }

        cout << "Case " << i << ": " << hi << endl;
    }
    return 0;
}


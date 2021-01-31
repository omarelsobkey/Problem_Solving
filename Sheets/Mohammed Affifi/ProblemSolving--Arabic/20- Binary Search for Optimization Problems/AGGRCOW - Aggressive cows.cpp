// https://www.spoj.com/problems/AGGRCOW/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int t, n;
vector<int> v;

bool can(long long mid, int cows) {
    cows--;
    int p1 = 0, p2 = 1;
    while (p2 < n) {
        if (v[p2] - v[p1] >= mid) {
            cows--;
            p1 = p2;
            if (cows == 0) return 1;
        }
        p2++;
    }

    return 0;
}


int main() {
    fast();
    int cows;

    cin >> t;
    while (t--) {
        cin >> n >> cows;
        v.resize(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        long long lo = 1, hi = v[n - 1], mid, res = 0;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            if (can(mid, cows)) {
                res = max(res, mid);
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        cout << res << endl;
    }
    return 0;
}


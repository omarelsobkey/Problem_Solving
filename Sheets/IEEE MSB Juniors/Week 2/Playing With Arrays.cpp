// https://codeforces.com/group/91LhUEgb6Y/contest/251869/problem/W

#include <iostream>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <stdio.h>

using namespace std;
#define endl '\n'

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    deque<int> a, r;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            r.push_back(i);
        }
        for (int i = 0; i < n; i++) {
            a.push_front(r.back());
            r.pop_back();

            if(i<n-1){
                a.push_front(a.back());
                a.pop_back();
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i == n - 1) cout << endl;
            else cout << " ";
        }
        a.clear();
        r.clear();
    }
    return 0;
}
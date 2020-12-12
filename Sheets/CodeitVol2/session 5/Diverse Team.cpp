// https://codeforces.com/problemset/problem/988/A

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
#include <memory.h>
#include <stack>
#include <queue>
using namespace std;
#define endl '\n'

bool freq[109];
int main()
{
    cin.tie(0); cin.sync_with_stdio(0);

    vector<int> v;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (!freq[x]) v.push_back(i);
        freq[x] = 1;
    }
    if (v.size() >= k) {
        cout << "YES\n";
        for (int i = 0; i < k; i++) {
            cout << v[i];
            if (i == k - 1) cout << endl;
            else cout << " ";
        }
    }
    else cout << "NO\n";
    return 0;
}
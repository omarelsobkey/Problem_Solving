// https://codeforces.com/contest/469/problem/A

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

    int n, p, q, x;
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        cin >> x;
        freq[x] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        freq[x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (!freq[i]) {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    cout << "I become the guy.\n";
    return 0;
}
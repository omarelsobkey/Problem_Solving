// https://codeforces.com/problemset/problem/1015/A

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

int part[109];
int main()
{
    cin.tie(0); cin.sync_with_stdio(0);
    vector<int> v;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        part[l]++;
        part[r + 1]--;
    }
    for (int i = 1; i <= m; i++) {
        part[i] += part[i - 1];
        if (!part[i]) v.push_back(i);
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
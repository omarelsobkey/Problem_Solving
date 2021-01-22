// https://codeforces.com/contest/782/problem/A

#include <iostream>
#include <map>
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
    map<int, int> mp;
    int t, counter = 0, mx = 0, x, n;
    cin >> n;
    for (int i = 0; i < n * 2; i++) {
        cin >> x;
        mp[x]++;
        if(mp[x]==1) counter++;
        else counter--;
        mx=max(mx, counter);
    }
    cout << mx << endl;
    return 0;
}
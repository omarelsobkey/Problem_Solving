// https://codeforces.com/group/91LhUEgb6Y/contest/251869/problem/D

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <stdio.h>
#include <limits.h>

using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int n, x, counter = 1;
    map<int, int> mp;
    vector<int> v;
    cin >> n;
    while (n--) {
        cin >> x;
        mp[x]++;
    }
    while (counter > 0) {
        counter = 0;
        for (auto &y:mp) {
            if (y.second > 0) {
                v.push_back(y.first);
                y.second--;
                counter++;
            }
        }
        for (int i = 0; i < counter; i++) {
            cout << v[i];
            if (i == counter - 1) cout << endl;
            else cout << " ";
        }
        v.clear();
    }
    return 0;
}
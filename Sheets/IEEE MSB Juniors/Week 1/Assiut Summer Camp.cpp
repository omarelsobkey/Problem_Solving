// https://codeforces.com/group/91LhUEgb6Y/contest/251869/problem/S

#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <stdio.h>

using namespace std;
#define endl '\n'

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

int main() {
    fast();
    int t;
    cin >> t;
    while (t--) {
        map<long long, string> mp;
        int x;
        cin >> x;
        mp[x] = "Hussien";
        cin >> x;
        mp[x] = "Atef";
        cin >> x;
        mp[x] = "Karemo";
        cin >> x;
        mp[x] = "Ezzat";
        map<long long, string>::reverse_iterator it = mp.rbegin();
        pair<long long, string> output = *it;
        cout << output.second << " ";
        output = *(++it);
        cout << output.second << endl;
        mp.clear();
    }
    return 0;
}
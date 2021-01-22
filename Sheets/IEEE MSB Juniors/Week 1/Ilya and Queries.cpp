// https://codeforces.com/problemset/problem/313/B

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int prefixDot[s.size() + 1] = {}, prefixHash[s.size() + 1] = {};
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == '#') {
            prefixDot[i + 1] = prefixDot[i];
            if (s[i] == s[i + 1]) prefixHash[i + 1] += prefixHash[i] + 1;
            else prefixHash[i + 1] = prefixHash[i];
        }
        else if (s[i] == '.') {
            prefixHash[i + 1] = prefixHash[i];
            if (s[i] == s[i + 1]) prefixDot[i + 1] += prefixDot[i] + 1;
            else prefixDot[i + 1] = prefixDot[i];
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << (prefixDot[b - 1] - prefixDot[a - 1]) + (prefixHash[b - 1] - prefixHash[a - 1]) << endl;
    }

    return 0;
}
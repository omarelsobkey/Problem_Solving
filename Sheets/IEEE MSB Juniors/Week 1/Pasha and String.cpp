// https://codeforces.com/contest/525/problem/B

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int m;
    string s;
    cin >> s >> m;
    long long pref[s.size() + 1] = {};
    for (int i = 0; i < m; i++) {
        int number;
        cin >> number;
        pref[number] ++;
        pref[s.size() - number + 2] --;
    }
    for (int i = 1; i <= s.size() + 1; i++) pref[i] += pref[i - 1];
    for (int i = 0; i < s.size()/2; i++) {
        if (pref[i + 1] % 2 && pref[i + 1] > 0) {
            swap(s[i], s[s.size()-i-1]);
            pref[i + 1] = 0;
        }
        else continue;
    }
    cout << s << endl;
    return 0;
} 
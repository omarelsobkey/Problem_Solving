// https://codeforces.com/problemset/problem/834/B

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>
#include <memory.h>

using namespace std;

int freq[26];
bool freq2[26];

int main()
{
    int n, k, guardCounter = 0;
    bool flag = 0;
    string doors;
    cin >> n >> k;
    cin >> doors;
    for (char x : doors) {
        freq[x - 'A']++;
    }
    for (int i = 0; i < n - 1; i++) {
        freq[doors[i] - 'A']--;
        if (!freq2[doors[i] - 'A']) {
            freq2[doors[i] - 'A'] = 1;
            guardCounter++;
        }
        if (guardCounter > k) { flag = 1; break; }
        if (!freq[doors[i] - 'A']) {
            guardCounter--;
            freq2[doors[i] - 'A'] = 0;
        }
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
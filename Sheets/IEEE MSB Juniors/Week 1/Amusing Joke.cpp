// https://codeforces.com/contest/141/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int freq1[26];
int freq2[26];

int main() {
    bool flag = 1;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for (char x : s1)
        freq1[x - 'A']++;
    for (char x : s2)
        freq1[x - 'A']++;
    for (char x : s3)
        freq2[x - 'A']++;

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
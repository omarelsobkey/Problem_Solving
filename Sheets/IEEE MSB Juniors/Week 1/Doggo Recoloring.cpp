// https://codeforces.com/contest/1025/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int freq[26];

int main()
{
    bool flag = 0;
    int length;
    string s;
    cin >> length >> s;
    for (char x : s) {
        freq[x - 'a']++;
    }
    for (int x : freq) {
        if (x >= 2) {
            flag = 1;
            break;
        }
    }
    
    if (length == 1||flag)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
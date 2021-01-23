// https://codeforces.com/problemset/problem/825/A

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

int main() 
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, c1 = 0, c0 = 0;
    vector<int> v;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') c1++;
        else {
            v.push_back(c1);
            c1 = 0;
        }

        if(i==n-1) v.push_back(c1);
    }
    for (int x : v) cout << x;
    cout << endl;
    return 0;
}

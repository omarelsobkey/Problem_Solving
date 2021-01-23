// https://codeforces.com/problemset/problem/776/A

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
    vector<string> v(2);
    cin >> v[0] >> v[1];
    int n;
    cin >> n;
    cout << v[0] << " " << v[1] << endl;
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == v[0]) v[0] = s2;
        else v[1] = s2;
        cout << v[0] << " " << v[1] << endl;
    }
    return 0;
}
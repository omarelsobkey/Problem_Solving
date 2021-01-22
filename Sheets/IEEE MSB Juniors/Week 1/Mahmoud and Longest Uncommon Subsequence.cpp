// https://codeforces.com/contest/766/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size()) {
        bool similarity = 1;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                similarity = 0;
                break;
            }
        }
        if (similarity)
            cout << -1 << endl;
        else
            cout << s2.size() << endl;
    }

    else if (s1.size() < s2.size())
        cout << s2.size() << endl;

    else if (s1.size() > s2.size())
        cout << s1.size() << endl;
    

    return 0;
}
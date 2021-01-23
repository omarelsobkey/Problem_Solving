// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include <iostream>
using namespace std;
int main()
{
    string s, t;
    int sL = 0, tL = 0;
    cin >> s;
    cin >> t;

    for (char x : s) {
        sL++;
    }
    for (char x : t) {
        tL++;
    }

    cout << sL << " " << tL << endl;
    cout << s + " " + t << endl;
    return 0;
}
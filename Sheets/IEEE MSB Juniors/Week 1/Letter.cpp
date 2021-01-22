// https://codeforces.com/problemset/problem/43/B?fbclid=IwAR3GzIUeFE3-5LGp4_FF6UFyzPlitemBy2d9-nW4cum2nKOXVrU6sMxOt_A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

int Upper1[26], Upper2[26], Lower1[26], Lower2[26];

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (char x : s1) {
        if (islower(x)) {
            Lower1[x - 'a']++;
        }
        else {
            Upper1[x - 'A']++;
        }
    }
    for (char x : s2) {
        if (islower(x)) {
            Lower2[x - 'a']++;
        }
        else {
            Upper2[x - 'A']++;
        }
    }
    bool flag = 1;
    for (int i = 0; i < 26; i++) {
        if ((Lower2[i] > 0 && Lower2[i] > Lower1[i]) || (Upper2[i] > 0 && Upper2[i] > Upper1[i])) {
            flag = 0;
            break;
        }
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
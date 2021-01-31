// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1508

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    string s, input;
    int t, p1, p2, startP;
    bool found;

    cin >> s >> t;
    while (t--) {
        cin >> input;
        found = 0;
        p1 = 0;
        p2 = 0;

        while (p1 < s.size()) {
            if (s[p1] == input[p2]) {
                if (p2 == 0) startP = p1;
                p1++;
                p2++;
            } else {
                p1++;
            }

            if (p2 == input.size()) {
                found = 1;
                break;
            }
        }

        if (found) cout << "Matched " << startP << " " << p1 - 1 << endl;
        else cout << "Not matched\n";
    }
    return 0;
}
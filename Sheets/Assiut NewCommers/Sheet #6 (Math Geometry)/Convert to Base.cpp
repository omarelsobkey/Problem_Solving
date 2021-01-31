// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/N

#include <iostream>
#include <cmath>
#include <vector>
#include <cctype>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    long long t, x;
    cin >> t;
    if (t == 1) {
        // x to decimal
        string inS;
        long long help, output = 0; // help holds the current digit

        cin >> inS >> x;

        for (int i = inS.size() - 1; i >= 0; i--) {
            if (isalpha(inS[i]))
                help = inS[i] - 'A' + 10;
            else
                help = inS[i] - '0';
            output += help * (long long) pow(x, inS.size() - i - 1);
        }
        cout << output << endl;
    } else {
        // decimal to x
        vector<char> output;
        long long inN;

        cin >> inN >> x;

        while (inN > 0) {
            if (inN % x >= 10) output.push_back('A' + inN % x - 10);
            else output.push_back('0' + inN % x);
            inN /= x;
        }
        while (!output.empty()) {
            cout << output.back();
            output.pop_back();
        }
        cout << endl;
    }

    return 0;
}

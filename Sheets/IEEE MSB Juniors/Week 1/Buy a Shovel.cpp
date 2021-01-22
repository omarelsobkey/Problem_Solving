// https://codeforces.com/contest/732/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int k, r, N1 = 1, N2=1;
    cin >> k >> r;

    for (int i = 2;; i++) {
        if ((k * N1 - r) % 10 == 0) {
            cout << N1 << endl;
            break;
        }
        else {
            N1 = i;
        }

        if ((k * N2) % 10 == 0) {
            cout << N2 << endl;
            break;
        }
        else {
            N2 = i;
        }
    }
    return 0;
}
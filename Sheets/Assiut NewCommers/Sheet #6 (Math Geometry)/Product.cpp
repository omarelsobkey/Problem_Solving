// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Q

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int l, r, m;
    cin >> l >> r >> m;
    long long pro = 1;
    for (int i = l; i <= r; i++) {

        pro *= i;
        pro %= m;
    }
    cout << pro << endl;
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/B

#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;
#define endl '\n'
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
int main()
{
    fast();
    int n;
    cin >> n;
    while (n > 4) {
        n -= 4;
    }
    if (n == 0) cout << 1 << endl;
    else if (n == 1) cout << 8 << endl;
    else if (n == 2) cout << 4 << endl;
    else if (n == 3) cout << 2 << endl;
    else cout << 6 << endl;
    return 0;
}
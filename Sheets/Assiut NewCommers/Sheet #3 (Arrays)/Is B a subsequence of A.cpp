// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U

#include <iostream>
using namespace std;
int main()
{
    bool state = true;
    unsigned int n, m, index;
    cin >> n >> m;
    unsigned long long a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        for (int j = 0; j < n; j++) {
            if ((a[j] == b[i] && i == 0) || (a[j] == b[i] && index < j)) {
                index = j;
                break;
            }
            else if ((j == n - 1)) {
                state = false;
            }
        }
    }

    if (state) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
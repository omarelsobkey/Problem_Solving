// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;

    while (true) {
        cin >> n >> m;
        if (min(n, m) <= 0) {
            break;
        }
        int sum = 0;
        for (int j = min(n, m); j <= max(n, m); j++) {
            sum += j;
            cout << j << " ";
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}
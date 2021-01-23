// https://codeforces.com/contest/252/problem/C

#include <iostream>
#include <map>

using namespace std;
#define endl '\n';

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int n, d;
    long long output = 0;

    cin >> n >> d;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long p1 = 0, p2 = 0;
    while (p2 < n || p2 - p1 >= 2) {
        while (p2 < n && a[p2] - a[p1] <= d) {
            p2++; 
        }

        if (p2 - p1 - 1 >= 2 && a[p2 - 1] - a[p1] <= d) {
            output += (((p2 - p1 - 1) * (p2 - p1 - 2)) / 2);
        }
        p1++;
    }
    cout << output << endl;
    return 0;
}
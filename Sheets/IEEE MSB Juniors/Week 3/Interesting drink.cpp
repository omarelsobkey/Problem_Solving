// https://codeforces.com/contest/706/problem/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int n, q, x;
    int *ptr;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cin >> q;
    while (q--) {
        cin >> x;
        ptr = upper_bound(arr, arr + n, x);
        cout << ptr - arr << endl;
    }
    return 0;
}
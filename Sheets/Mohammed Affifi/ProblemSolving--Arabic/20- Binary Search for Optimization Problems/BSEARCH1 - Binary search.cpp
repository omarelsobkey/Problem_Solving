// https://www.spoj.com/problems/BSEARCH1/

#include <iostream>
#include <vector>

using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    long long n, t, x;
    cin >> n >> t;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    while (t--) {
        cin >> x;
        if (*(lower_bound(arr.begin(), arr.end(), x)) == x && lower_bound(arr.begin(), arr.end(), x) - arr.begin() < n)
            cout << lower_bound(arr.begin(), arr.end(), x) - arr.begin() << endl;
        else cout << -1 << endl;
    }
    return 0;
}

// https://codeforces.com/contest/190/problem/D

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
    int n, k;
    long long output = 0;
    map<int, int> mp;

    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int p1 = 0, p2 = 0;
    mp[a[p2]] = 0;
    while (p1 < n) {
        while (p2 < n) {
            mp[a[p2]]++;
            if (mp[a[p2]] == k) {
                output += n - p2;
                mp[a[p2]]--;
                break;
            }
            p2++;
        }
        mp[a[p1]]--;
        p1++;
    }

    cout << output << endl;
    return 0;
}
// https://codeforces.com/contest/602/problem/B

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
    int n, output = 0;

    map<int, int> mp;

    cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int p1 = 0, p2 = 0;
    while (p2 < n) {
        while (p2 < n) {
            mp[a[p2]]++;
            if (mp.size() > 2) break;
            p2++;
        }
        output = max(output, p2 - p1);

        while (mp.size() > 2) {
            mp[a[p1]]--;
            if (mp[a[p1]] == 0) mp.erase(mp.find(a[p1]));
            p1++;
        }
        if (p2 < n) p2++;
    }
    cout << output << endl;
    return 0;
}
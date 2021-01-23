// https://www.hackerrank.com/challenges/marcs-cakewalk/problem

#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits.h>
#include <vector>

using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int t, n, x;
    long long output = 0;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        output+=v[i]*pow(2, (n-1)-i);
    }
    cout << output << endl;

    return 0;
}

// https://codeforces.com/contest/1003/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int freq[101];

int main() {
    int n, number, maxi = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        freq[number]++;
    }
    for (int x : freq) {
        maxi = max(maxi, x);
    }
    cout << maxi << endl;
    return 0;
}
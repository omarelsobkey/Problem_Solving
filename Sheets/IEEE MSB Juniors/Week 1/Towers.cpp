// https://codeforces.com/problemset/problem/37/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
#define endl '\n'

int main() {
    int n, maxLength = 0, counter = 0;
    cin >> n;
    int freq[1001] = {};

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        freq[number]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (freq[i]) counter++;
        if (freq[i] > maxLength) maxLength = freq[i];
    }

    cout << maxLength << " " << counter << endl;
    return 0;
}
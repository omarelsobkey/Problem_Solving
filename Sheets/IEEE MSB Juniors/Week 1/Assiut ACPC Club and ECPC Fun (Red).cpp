// https://codeforces.com/group/T84BoxnvJP/contest/220427/problem/H

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdio.h>

using namespace std;
#define endl '\n'

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int freq[100000];

int main() {
    fast();
    int n, l, r, n1;
    cin >> n;

    int *arr = new int[n];
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> l >> r;
        freq[l - 1]--;
        freq[r]++;
    }
    for (int i = 1; i <= n; i++) {
        freq[i] += freq[i - 1];
        if (freq[i - 1] >= 0) {
            v.push_back(arr[i - 1]);
        }
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i == v.size() - 1)cout << endl;
        else cout << " ";
    }

    return 0;
}
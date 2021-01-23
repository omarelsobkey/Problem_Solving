// https://codeforces.com/problemset/problem/368/B

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
#include <memory.h>
#include <stack>
#include <queue>

using namespace std;
#define endl '\n'

int freq[100009];
int main()
{
    cin.tie(0); cin.sync_with_stdio(0);

    int n, m, counter = 0;
    int arr[100009], arr1[100009];
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (!freq[arr[i]]) counter++;
        freq[arr[i]]++;
    }
    arr1[0] = counter;
    for (int i = 1; i < n; i++) {
        freq[arr[i - 1]]--;
        if (!freq[arr[i - 1]]) counter--;
        arr1[i] = counter;
    }
    while (m--) {
        int x; cin >> x;
        cout << arr1[x-1] << endl;
    }
    return 0;
}
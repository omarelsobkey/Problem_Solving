// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int y = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=898

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using namespace std;
#define endl '\n'

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int y, n, mx, firstPop, lastPopIndex;
    int* arr;
    while (cin >> y >> n) {
        mx = 0;
        arr = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            if ((upper_bound(arr, arr + n, arr[i] + y - 1) - arr) - i > mx) {
                mx = (upper_bound(arr, arr + n, arr[i] + y - 1) - arr) - i;
                firstPop = arr[i];
                lastPopIndex = lower_bound(arr, arr + n, arr[i] + y - 1) - arr;
                if (arr[lastPopIndex] > arr[i] + y - 1) lastPopIndex--;
            }
        }
        cout << mx << " " << firstPop << " " << arr[lastPopIndex] << endl;
    }
    return 0;
}

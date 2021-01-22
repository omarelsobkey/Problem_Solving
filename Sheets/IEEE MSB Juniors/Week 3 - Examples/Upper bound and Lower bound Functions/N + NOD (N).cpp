// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2987

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

int NOD(int n) {
    int counter = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0 && i != n / i) counter += 2;
        else if (n % i == 0) counter++;
    }
    return counter;
}

int main() {
    fast();
    int t, a, b, n = 1;
    int arr[100000];
    cin >> t;
    arr[0] = 1;
    for (int i = 1; arr[i - 1] < 1000000; i++) {
        arr[i] = (arr[i - 1] + NOD(arr[i - 1]));
        n++;
    }
    for (int i = 1; i <= t; i++) {
        cin >> a >> b;
        a = lower_bound(arr, arr + n, a) - arr;
        b = upper_bound(arr, arr + n, b) - arr;
        cout << "Case " << i << ": " << b - a << endl;
    }

    return 0;
}

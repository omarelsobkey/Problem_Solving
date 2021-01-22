// https://codeforces.com/contest/18/problem/C#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, counter = 0, sumR = 0, sumL = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sumR += arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        sumL += arr[i];
        sumR -= arr[i];
        if (sumL == sumR) counter++;
    }
    cout << counter << endl;
    return 0;
}
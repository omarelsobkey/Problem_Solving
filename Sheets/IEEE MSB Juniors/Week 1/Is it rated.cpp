// https://codeforces.com/contest/807/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    bool state = 0;
    int n, arr[1001] = {}, arr1[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> arr[i];
        arr1[i] = arr[i];
        cin >> number;
        if (number != arr[i]) state = 1;
    }
    if (state) cout << "rated\n";
    else {
        sort(arr1, arr1 + n);
        reverse(arr1, arr1 + n);
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr1[i]) {
                cout << "unrated\n";
                return 0;
            }
        }
        cout << "maybe\n";
    }
    return 0;
}
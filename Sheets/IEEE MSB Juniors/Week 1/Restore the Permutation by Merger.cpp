// https://codeforces.com/contest/1385/problem/B

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>
#include <memory.h>

using namespace std;

bool freq[101];

int main()
{
    int t;
    cin >> t;
    while (t--) {
        memset(freq, 0, 101);
        int n, arr[101] = {}, lastIndex;
        cin >> n;
        for (int i = 0; i < 2*n; i++) {
            int number;
            cin >> number;
            if (!freq[number]) {
                freq[number] = 1;
                arr[i] = number;
                lastIndex = i;
            }
        }
        for (int i = 0; i < 2 * n; i++) {
            if (arr[i]) {
                cout << arr[i];
                if (i < lastIndex) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
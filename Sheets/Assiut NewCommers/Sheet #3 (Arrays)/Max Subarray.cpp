// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

#include<iostream>
using namespace std;

int main()
{
    unsigned short t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], max;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            max = arr[i];
            for (int j = i; j < n; j++) {
                if (arr[j] > max) {
                    max = arr[j];
                }

                cout << max << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
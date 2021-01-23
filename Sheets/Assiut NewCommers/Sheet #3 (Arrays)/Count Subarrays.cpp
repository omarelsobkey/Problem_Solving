// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q

#include<iostream>
using namespace std;
int main()
{
    unsigned short t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], subCounter = n;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            int j = i;
            while (j < n-1 && arr[j] <= arr[j + 1]) {
                subCounter++;
                j++;
            }
        }
        cout << subCounter << endl;
    }
    return 0;
}
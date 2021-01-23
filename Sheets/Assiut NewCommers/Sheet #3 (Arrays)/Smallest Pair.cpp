// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <iostream>
using namespace std;

int main()
{
    unsigned short t, n;
    cin >> t;
    while (t--) {
        int smallestSum = 0;
        cin >> n;
        int number[100];

        for (int j = 0; j < n; j++) {
            cin >> number[j];
            for (int i = j - 1; i >= 0; i--) {
                if (i == 0 && j == 1) {
                    smallestSum = number[i] + number[j] + j - i;
                }
                else if ((number[i] + number[j] + j - i) < smallestSum) {
                    smallestSum = number[i] + number[j] + j - i;
                }
            }
        }
        cout << smallestSum << endl;
    }
    return 0;
}
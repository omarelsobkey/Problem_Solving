// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int d1 = 0, d2 = 0;
    unsigned short n;
    cin >> n;
    short matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (i == j) {
                d1 += matrix[i][j];
            }
            if (j == n - 1 - i) {
                d2 += matrix[i][j];
            }
        }
    }
    cout << abs(d1 - d2) << endl;
    return 0;
}
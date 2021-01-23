// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <iostream>
using namespace std;
int main()
{
    int a, b, n = 0; 
    cin >> a >> b;

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= a; j++) {
            if (i + j <= b && i + j + a >= b) {
                n++;
            }
        }
    }

    cout << n << '\n';
}
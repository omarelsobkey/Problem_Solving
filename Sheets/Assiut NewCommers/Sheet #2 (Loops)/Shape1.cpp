// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <iostream>
using namespace std;
int main()
{
    int numberOfL;
    cin >> numberOfL;

    for (int i = numberOfL; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
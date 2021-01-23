// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O

#include <iostream>
using namespace std;
int main()
{
    int numberOfL;
    cin >> numberOfL;

    for (int i = 1; i <= numberOfL; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
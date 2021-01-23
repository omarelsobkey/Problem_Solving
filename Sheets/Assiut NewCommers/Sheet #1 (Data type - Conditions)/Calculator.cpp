// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <iostream>
using namespace std;
int main()
{
    long long n1, n2;
    char x;
    cin >> n1 >> x >> n2;
    switch (x) {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    }
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <iostream>
using namespace std;
int main()
{
    long long a, b, Q;
    char s;
    char equal;
    cin >> a >> s >> b >> equal >> Q;

    switch (s) {
    case '+':
        if ((a + b) == Q) {
            cout << "Yes";
        }
        else {
            cout << a + b;
        }
        break;
    case '-':
        if ((a - b) == Q) {
            cout << "Yes";
        }
        else {
            cout << a - b;
        }
        break;
    case '*':
        if ((a * b) == Q) {
            cout << "Yes";
        }
        else {
            cout << a * b;
        }
        break;
    }
    return 0;
}
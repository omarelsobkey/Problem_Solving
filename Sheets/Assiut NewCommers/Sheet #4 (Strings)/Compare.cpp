// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <iostream>
using namespace std;
int main()
{
    string x, y;
    cin >> x;
    cin >> y;
    if (x <= y) {
        cout << x << endl;
    }
    else {
        cout << y << endl;
    }
    return 0;
}
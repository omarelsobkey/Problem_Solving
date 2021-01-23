// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a;
    cin >> a;
    if ((int)a < a || a < (int)a) {
        cout << fixed << setprecision(3) << "float " << (int)a << " " << a - (int)a;
    }
    else {
        cout << "int " << a;
    }

    return 0;
}
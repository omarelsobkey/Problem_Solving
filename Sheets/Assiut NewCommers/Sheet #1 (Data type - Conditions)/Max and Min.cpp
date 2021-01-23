// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(min(a, b), c) << " " << max(max(a, b), c) << endl;
    return 0;
}
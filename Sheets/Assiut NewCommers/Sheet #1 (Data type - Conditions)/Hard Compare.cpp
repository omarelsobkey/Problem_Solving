// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b*log10(a)>d*log10(c)){
        cout << "YES\n";
    }
    else {
    cout << "NO\n";
    }
    return 0;
}
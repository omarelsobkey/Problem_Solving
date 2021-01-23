// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, c, minimum, maximum;
    cin >> a >> b >> c;
    minimum = min(min(a, b), c);
    maximum = max(max(a, b), c);
   
    cout << minimum << endl;
    if ((b <= a && a <= c)|| (c <= a && a <= b))
        cout << a;
    else if ((a <= b && b <= c) || (c <= b && b <= a))
        cout << b;
    else if ((a <= c && c <= b) || (b <= c && c <= a))
        cout << c;
    cout << endl << maximum << endl;
    cout << endl << a << endl << b << endl << c;
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    
    if ((n[0]-'0') % 2 == 0) {
        cout << "EVEN";
    }
    else {
        cout << "ODD";
    }

    return 0;
}
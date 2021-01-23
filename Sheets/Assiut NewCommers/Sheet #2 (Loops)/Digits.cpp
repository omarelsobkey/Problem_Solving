// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <iostream>
#include <string>
using namespace std;
int main()
{
    short t;
    string number;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> number;
        for (int j = number.length() - 1; j >= 0; j--) {
            cout << number[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    unsigned short a, b;
    string number;
    bool state = true;

    cin >> a >> b;
    cin >> number;

    for (int i = 0; i < a + b + 1; i++) {
        if ((i == a && number[i] != '-') || (i != a && (number[i] < '0' || number[i] > '9'))) {
            state = false;
            break;
        }
    }
    if (state) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}
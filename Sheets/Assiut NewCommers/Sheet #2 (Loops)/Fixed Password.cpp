// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include <iostream>
using namespace std;
int main()
{
    int password;

    while (true) {
        cin >> password;
        if (password != 1999) {
            cout << "Wrong" << endl;
        }
        else {
            cout << "Correct";
            break;
        }
    }
    return 0;
}
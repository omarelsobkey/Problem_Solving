// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char letter;
    cin >> letter;

    if (isdigit(letter)) {
        cout << "IS DIGIT";
    }
    else {
        cout << "ALPHA" << endl;
        if (isupper(letter)) {
            cout << "IS CAPITAL";
        }
        else {
            cout << "IS SMALL";
        }
    }

    return 0;
}
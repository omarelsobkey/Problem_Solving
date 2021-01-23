// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char letter;
    cin >> letter;

    if (islower(letter)) {
        cout << (char)toupper(letter);
    }
    else {
        cout << (char)tolower(letter);
    }

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

#include <iostream>
using namespace std;
int main()
{
    char symbol;
    int numberOfN, numbersEntered;
    cin >> symbol;
    cin >> numberOfN;

    for (int i = 0; i < numberOfN; i++) {
        cin >> numbersEntered;
        for (int j = 0; j < numbersEntered; j++) {
            cout << symbol;
        }
        cout << endl;
    }
}
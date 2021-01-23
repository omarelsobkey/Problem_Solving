// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

#include <iostream>

using namespace std;

int main()
{
    int numberOfRows, counter = 0;
    cin >> numberOfRows;
    for (int i = 1; i <= numberOfRows; i++) {
        for (int j = numberOfRows; j > i; j--) {
            cout << " ";
        }

        for (int j = 1; i + counter >= j; j++) {
            cout << "*";
        }
        counter++;
        cout << endl;
    }

    return 0;
}
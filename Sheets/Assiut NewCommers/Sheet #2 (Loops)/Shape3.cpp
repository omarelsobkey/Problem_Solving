// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

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
    counter--;
    for (int i = numberOfRows; i >= 1; i--) {
        for (int j = i; j < numberOfRows; j++) {
            cout << " ";
        }

        for (int j = i + counter; 1 <= j; j--) {
            cout << "*";
        }
        counter--;
        cout << endl;
    }
    
    return 0;

}
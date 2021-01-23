// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <iostream>
using namespace std;

int main()
{
    string number;
    unsigned int n, sum = 0;
    cin >> n;
    cin >> number;
    for (int i = n - 1; i >= 0; i--) {
        switch (number[i]) {
        case 48:
            sum += 0;
            break;
        case 49:
            sum += 1;
            break;
        case 50:
            sum += 2;
            break;
        case 51:
            sum += 3;
            break;
        case 52:
            sum += 4;
            break;
        case 53:
            sum += 5;
            break;
        case 54:
            sum += 6;
            break;
        case 55:
            sum += 7;
            break;
        case 56:
            sum += 8;
            break;
        case 57:
            sum += 9;
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
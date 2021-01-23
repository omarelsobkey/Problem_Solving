// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    string number, subString;

    cin >> t;
    while (t--) {
        cin >> number;

        for (int i = 0; i < number.size() - 2; i++) {
            subString = number[i];
            subString += number[i + 1];
            subString += number[i + 2];
            if (subString == "101" || subString == "010") {
                cout << "Good\n";
                break;
            }
            else if (i == number.size() - 3) {
                cout << "Bad\n";
            }
        }
    }
    return 0;
}
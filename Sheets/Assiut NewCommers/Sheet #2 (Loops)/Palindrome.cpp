// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <iostream>
#include <string>
#include <cmath>
#include<algorithm>
using namespace std;
int main()
{
    int  number, modifyNumber, helper = 0;
    cin >> number;

    // variable to modify and save the original 
    // to compare with the final
    modifyNumber = number;

    // reverse the number 
    for (int i = pow(10, to_string(number).length() - 1); i > 0; i /= 10) {
        helper += (modifyNumber % 10) * i;
        modifyNumber /= 10;
    }


    cout << helper << endl;
    // compare the final ( reverse) with the original
    if (helper == number) { cout << "YES"; }
    else { cout << "NO"; }

    return 0;
}
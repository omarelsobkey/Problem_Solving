// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int  number1, number2, help = 0;
    bool status = true;
    cin >> number1 >> number2;

    for (int i = min(number1, number2) ; i <= max(number1, number2) ; i++ ) {
        int modifyNumber = i;
        for (int j = 0 ; j < to_string(i).length() ; j++ ) {
            if ( !( (modifyNumber % 10) == 4 || (modifyNumber % 10) == 7 ) ) {
                status = false;
                break;
            }
            modifyNumber /= 10;
        }  
        if (status == true){ 
            cout << i << " ";
            help = i;
        }
        else { status = true; }
    }
    if (help == 0) { cout << -1; }
    return 0;
}
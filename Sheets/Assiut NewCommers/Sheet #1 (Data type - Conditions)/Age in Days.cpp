// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <iostream>
using namespace std;
int main()
{
    int date;
    cin >> date;
    cout << date / 365 << " years" << endl;
    date %= 365;
    cout << date / 30 << " months" << endl;
    date %= 30;
    cout << date << " days" << endl;

    return 0;
}
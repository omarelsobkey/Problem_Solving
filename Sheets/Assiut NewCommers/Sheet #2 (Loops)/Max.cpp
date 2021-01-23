// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <algorithm> 

#include <iostream>

using namespace std;
int main()
{
    int numberOfTries;
    long long maximum = 0 ;
    cin >> numberOfTries;
    for (int i = 1; i <= numberOfTries; i++) {
        long long number;
        cin >> number;
        maximum = max(maximum, number);
    }

    cout << maximum;
    return 0;
}
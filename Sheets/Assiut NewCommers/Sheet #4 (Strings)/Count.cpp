// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string number;
    int sum = 0;
    
    cin >> number;
    for (char x : number) {
        sum += (x - '0');
    }
    cout << sum;
    return 0;
}
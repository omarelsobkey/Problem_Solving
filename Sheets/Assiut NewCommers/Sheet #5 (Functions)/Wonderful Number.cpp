// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool palindrome(long long decimal)
{
    string binary = "", binaryReverse;
    while (decimal != 0) {
        binary += (decimal % 2);
        decimal /= 2;
    }
    binaryReverse = binary;
    reverse(binaryReverse.begin(), binaryReverse.end());
    if (binary == binaryReverse) {
        return true;
    }
    else {
        return false;
    }
}
bool odd(long long number)
{
    if (number % 2 == 0) {
        return false;
    }
    else {
        return true;
    }
}
int main()
{
    long long n;
    cin >> n;
    if (palindrome(n) && odd(n)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}
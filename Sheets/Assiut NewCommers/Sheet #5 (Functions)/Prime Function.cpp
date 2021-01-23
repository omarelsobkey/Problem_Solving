// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool prime(long long n)
{
    if (n == 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n % 2 == 0)
    {
        return false;
    }
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int t;
    long long n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        if (prime(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
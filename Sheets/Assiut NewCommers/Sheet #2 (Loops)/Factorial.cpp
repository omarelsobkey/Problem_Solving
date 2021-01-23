// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <iostream> 
using namespace std;
int main()
{
    int t;

    cin >> t;
    for (int i = 1; i <= t; i++) {
        int number;
        cin >> number;
        long long factorial = 1;
        for (int j = 1; j <= number; j++) {
            factorial = factorial * j;
        }
        cout << factorial << endl;
    }

    return 0;
}
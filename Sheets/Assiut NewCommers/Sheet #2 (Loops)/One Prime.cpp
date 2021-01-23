// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <iostream> 
using namespace std;
int main()
{
    int  n;
    cin >> n;
    string status = "YES";
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            status = "NO";
            break;
        }
    }

    cout << status;

    return 0;
}
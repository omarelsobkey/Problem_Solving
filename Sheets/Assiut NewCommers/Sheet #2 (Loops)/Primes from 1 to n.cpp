// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <iostream> 
using namespace std;
int main()
{
    int  number;
    cin >> number;
    cout << 2 << " ";
    for (int j = 2; j <= number; j++) {
        for (int i = 2; i < j; i++) {
            if (j % i == 0) {
                break;
            }
            else if (i == j - 1) {
                cout << j << " ";
            }
        }
    }

    return 0;
}
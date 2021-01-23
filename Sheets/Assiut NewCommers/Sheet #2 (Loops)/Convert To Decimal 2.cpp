// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 10) {
        for (int i = 0; i < n; i++)
        {
            int counter = 0;
            long long decimal;
            cin >> decimal;
            if (decimal >= 0 && decimal <= pow(2, 31) - 1) {
                while (decimal != 0)
                {
                    if (decimal % 2 == 1) {
                        counter++;
                    }
                    decimal /= 2;
                }
                cout <<  ((long long)pow(2, counter) - 1) << endl;
            }
        }
    }
    return 0;
}
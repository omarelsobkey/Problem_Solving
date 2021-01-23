// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

#include <iostream>
using namespace std;
int main()
{
    int numberOfRows, print = 1, counter = 1;
        cin >> numberOfRows;

        for (int i = 1; i <= numberOfRows; i++) {
            while (true) {
                cout << print << " ";
                if (counter % 3 == 0) {
                    cout << "PUM\n";
                    print += 2;
                    counter++;
                    break;
                }
                print++;
                counter++;
            }
        }

        return 0;
}
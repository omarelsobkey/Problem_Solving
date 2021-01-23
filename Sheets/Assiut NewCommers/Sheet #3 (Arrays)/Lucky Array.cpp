// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    int arr[n], smallest, fCounter = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0) {
            smallest = arr[i];
        }
        else if (arr[i] < smallest) {
            smallest = arr[i];
            fCounter = 1;
        }
        else if (arr[i] == smallest) {
            fCounter++;
        }
    }
    if (fCounter % 2 == 0) {
        cout << "Unlucky\n";
    }
    else {
        cout << "Lucky\n";
    }
    return 0;
}
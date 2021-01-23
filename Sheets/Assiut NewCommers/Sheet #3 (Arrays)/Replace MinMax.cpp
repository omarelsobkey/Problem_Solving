// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    int arr[n], minI = 0, maxI = 0, helper;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < arr[minI]) {
            minI = i;
        }
        else if (arr[i] > arr[maxI]) {
            maxI = i;
        }
    }
    helper = arr[minI];
    arr[minI] = arr[maxI];
    arr[maxI] = helper;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
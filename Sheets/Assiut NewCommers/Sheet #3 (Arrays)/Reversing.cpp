// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i<n;i++){
        cin >> arr[i];
    }
    for (int i = n-1 ; i>=0;i--){
        cout << arr[i]<<" ";
    }
    return 0;
}
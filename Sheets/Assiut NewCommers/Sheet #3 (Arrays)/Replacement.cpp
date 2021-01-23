// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i<n;i++){
        cin >> arr[i];
        
        if(arr[i]>0){
            cout << 1 <<" ";
        } else if (arr[i] < 0){
            cout << 2 << " ";
        } else {
            cout << 0 << " ";
        }
    }
    
    return 0;
}
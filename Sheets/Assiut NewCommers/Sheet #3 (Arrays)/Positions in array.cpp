// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i<n;i++){
        cin >> arr[i];
        
        if(arr[i]<=10){
            cout << "A["<<i<<"] = "<<arr[i]<<endl;
        }
    }
    
    return 0;
}
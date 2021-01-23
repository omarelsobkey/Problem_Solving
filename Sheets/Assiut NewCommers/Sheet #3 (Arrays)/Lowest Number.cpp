// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin >> n;
    int arr[n], lowestE, lowestEI;
    
    for (int i = 0; i<n;i++){
        cin >> arr[i];
        if(i == 0){
            lowestE = arr[i];
            lowestEI = i + 1;
        }
        else if(arr[i] < lowestE){
            lowestE = arr[i];
            lowestEI = i + 1;
        }
    }
    
    cout << lowestE << " " << lowestEI;
    
    return 0;
}
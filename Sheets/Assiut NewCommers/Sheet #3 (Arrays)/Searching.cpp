// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin >> n;
    unsigned long long arr[n], element = 0;
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    cin >> element;
    for (int i = 0; i < n ; i++){
        if (element == arr[i]){
            cout << i;
            break;
        } else if(i == n-1 && element != arr[i]) {
            cout << -1;
        }
    }
    
    return 0;
}
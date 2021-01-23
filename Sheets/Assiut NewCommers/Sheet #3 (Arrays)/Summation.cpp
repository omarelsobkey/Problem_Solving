// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin >> n;
    long long arr[n], sum = 0;

    for (int i = 0; i < n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum >= 0){
        cout << sum;
    } else {
        cout <<-1 * sum;
    }
    
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    string msg = "YES";
    cin >> n;
    long long palindrome[n];
    
    for (int i = 0; i<n;i++){
        cin >> palindrome[i];
    }
    for (int i = 0 ; i < n/2 + 1 ;i++){
        if(palindrome[i] != palindrome[n-1-i]){
            msg = "NO";
            break;
        }
    }
    cout << msg;
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string word1, word2 = "";
    cin >> word1;
    
    for (int i = word1.size() - 1; i >= 0; i--) {
        word2 += word1[i];
    }
    if (word1 == word2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
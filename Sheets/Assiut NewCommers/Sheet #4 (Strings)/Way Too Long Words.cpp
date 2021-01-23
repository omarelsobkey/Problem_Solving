// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    string word;
    cin >> t;
    while (t--) {
        cin >> word;
        if (word.size() > 10) {
            cout << word[0] + to_string(word.size() - 2) + word[word.size() - 1] << endl;
        }
        else {
            cout << word << endl;
        }
    }
    return 0;
}
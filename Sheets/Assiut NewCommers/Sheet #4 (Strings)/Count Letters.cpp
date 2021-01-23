// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string word;
    int charCount = 0;
    cin >> word;
    sort(word.begin(), word.end());
    for (int i = 0; i < word.size(); i++) {
        if (i > 0 && word[i] != word[i - 1]) {
            cout << word[i - 1] << " : " << charCount << endl;
            charCount = 1;
        }
        else {
            charCount++;
        }
        if (i == word.size() - 1) {
            cout << word[i] << " : " << charCount << endl;
        }
    }
    return 0;
}
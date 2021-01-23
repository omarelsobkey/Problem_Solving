// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    string word1, word2, word3;

    cin >> t;
    while (t--) {
        word3 = "";
        cin >> word1 >> word2;
        while (word1 != "" || word2 != "") {
            if (word1 != "") {
                word3 += word1[0];
                word1.erase(0, 1);
            }
            if (word2 != "") {
                word3 += word2[0];
                word2.erase(0, 1);
            }
        }
        cout << word3 << endl;
    }
    return 0;
}
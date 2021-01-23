// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    cin >> sentence;

    for (char &x : sentence) {
        if (x == ',') {
            x = ' ';
        }
        else if ('A' <= x && x <= 'Z') {
            x = tolower(x);
        }
        else if ('a' <= x && x <= 'z') {
            x = toupper(x);
        }
    }
    cout << sentence << endl;
    return 0;
}
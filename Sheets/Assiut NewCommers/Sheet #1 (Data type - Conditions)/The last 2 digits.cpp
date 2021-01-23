// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(((a%100)*(b%100)*(c%100)*(d%100))%100<10){
        cout << 0;
    }
    cout << ((a%100)*(b%100)*(c%100)*(d%100))%100 << endl;
    return 0;
}
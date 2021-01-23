// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T ; i++) {
        int n, m;
        cin >> n >> m;
        
        int sum = 0;
        for (int j = ( min(n, m) + 1 ) ; j < max(n, m) ; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
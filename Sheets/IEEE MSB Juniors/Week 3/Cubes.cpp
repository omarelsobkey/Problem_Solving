// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2423

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main() {
    fast();

    int n;
    vector<int> v;
    for (int i = 1; i <= 10000; i++) v.push_back(i);


    while (cin >> n && n) {
        int yI = 0, xI = 0;
        bool found = 0;
        while (yI < v.size()) {
            while (xI + 1 < n && pow(v[xI], 3) - pow(v[yI], 3) < n) {
                xI++;
            }
            if (pow(v[xI], 3) - pow(v[yI], 3) == n) {
                found = 1;
                break;
            }
            yI++;
        }

        if (found) cout << v[xI] << " " << v[yI] << endl;
        else cout << "No solution\n";
    }

    return 0;
}

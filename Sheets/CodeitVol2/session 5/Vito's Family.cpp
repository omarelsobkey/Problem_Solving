// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=982&mosmsg=Submission+received+with+ID+23069285

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, noNieghbors, minimalSum = 0;
    vector <int> nieghbors;
    cin >> n;
    while (n--) {
        cin >> noNieghbors;
        nieghbors.resize(noNieghbors);
        for (int i = 0; i < noNieghbors; ++i) {
            cin >> nieghbors[i];
        }
        sort(nieghbors.begin(), nieghbors.begin() + noNieghbors);
        for (int i = 0; i < noNieghbors; ++i) {
            minimalSum += abs(nieghbors[noNieghbors / 2] - nieghbors[i]);
        }
        cout << minimalSum << endl;
        minimalSum = 0;
    }
    return 0;
}

// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1415

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, Q, query, c = 1;;
    cin >> N >> Q;
    while (N || Q) {
        cout << "CASE# " << c++ << ":\n";
        vector<int> marbles(N);
        for (int& marble : marbles) {
            cin >> marble;
        }
        sort(marbles.begin(), marbles.end());
        for (int i = 0; i < Q; ++i) {
            cin >> query;
            auto itr = find(marbles.begin(), marbles.end(), query);
            if (itr == marbles.end()) {
                cout << query << " not found\n";
            }
            else {
                cout << query << " found at " << (itr - marbles.begin()) + 1 << endl;
            }
        }
        cin >> N >> Q;
    }
    return 0;
}

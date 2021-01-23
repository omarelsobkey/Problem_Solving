// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/J

#include <iostream>
#include <map>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> counter;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            for (int j = 2; j <= i; j++) {
                if (i % j == 0 && i != j) break;
                if (j == i) {
                    counter[i]++;
                    n /= i;
                }
            }
        }
    }

    auto it = counter.cbegin();
    while (n > 1) {
        while (n % it->first == 0) {
            counter[it->first]++;
            n /= it->first;
        }
        it++;
    }

    int i = counter.size() - 1;
    for (auto x : counter) {
        printf("(%d^%d)", x.first, x.second);
        if (i == 0)
            cout <<
                 endl;
        else cout << "*";
        i--;
    }
    return 0;
}
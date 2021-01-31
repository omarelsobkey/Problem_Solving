// https://app.codility.com/programmers/lessons/14-binary_search_algorithm/min_max_division/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool can(int mid, int k, vector<int> &v) {
    int gCounter = 0, counter = 0;
    for (int i = 0; i < v.size(); i++) {
        counter += v[i];
        if (counter > mid) {
            gCounter++;
            counter = v[i];
        }
        if (i == v.size() - 1) gCounter++;
    }
    if (gCounter > k) return 0;
    else return 1;
}

int solution(int K, int M, vector<int> &A) {
    int lo, hi = 0, mid;
    M = 0;
    for (auto x : A) {
        M = max(M, x);
        hi += x;
    }
    lo = M;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (can(mid, K, A)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    return hi;
}

int main() {
    fast();
    vector<int> A = {4, 4};
    cout << solution(2, 10, A);
    return 0;
}
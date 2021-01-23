// https://codeforces.com/problemset/problem/767/A

#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>

#define iso ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() 
{
    iso
    priority_queue<int> pq;
    int n, c;
    cin >> n;
    c = n;
    while (n--) {
        int x;
        cin >> x;
        pq.push(x);
        while (!pq.empty() && pq.top() == c) {
            cout << pq.top() << " ";
            pq.pop();
            c--;
        }
        cout << endl;
    }
    return 0;
}
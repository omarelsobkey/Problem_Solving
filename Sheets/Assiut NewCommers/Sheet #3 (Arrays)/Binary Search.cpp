// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <iostream>
#include <map>
#include <algorithm>
#include <stdio.h>


using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


int main() {
    fast();
    map<int, int> mp;
    int n, t, x;
    cin >> n >> t;
    while(n--){
        cin >> x;
        mp[x]++;
    }
    while(t--){
        cin >> x;
        if(mp.count(x)>0) cout << "found\n";
        else cout << "not found\n";
    }
    return 0;
}
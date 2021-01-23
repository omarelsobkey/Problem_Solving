// https://codeforces.com/contest/762/problem/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define endl "\n"

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int usbC, psC, bothC, n, x;
    long long sum = 0, counter = 0;
    string s;

    vector<int> usb, ps;
    vector<int>::iterator ptr1, ptr2;

    cin >> usbC >> psC >> bothC >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> s;
        if (s[0] == 'U') {
            usb.push_back(x);
        }
        else {
            ps.push_back(x);
        }
    }
    sort(usb.begin(), usb.end());
    sort(ps.begin(), ps.end());

    while (usbC > 0) {
        ptr1 = lower_bound(usb.begin(), usb.end(), 1);
        if (ptr1 == usb.end()) break;
        sum += *ptr1;
        *ptr1 = 0;
        counter++;
        usbC--;
    }
    while (psC > 0) {
        ptr2 = lower_bound(ps.begin(), ps.end(), 1);
        if (ptr2 == ps.end()) break;
        sum += *ptr2;
        *ptr2 = 0;
        counter++;
        psC--;
    }
    while (bothC > 0) {
        ptr1 = lower_bound(usb.begin(), usb.end(), 1);
        ptr2 = lower_bound(ps.begin(), ps.end(), 1);
        if (ptr1 == usb.end() && ptr2 == ps.end()) {
            break;
        }
        else if (ptr1 == usb.end()) {
            sum += *ptr2;
            *ptr2 = 0;
        }
        else if (ptr2 == ps.end()) {
            sum += *ptr1;
            *ptr1 = 0;
        }
        else if (*ptr2 <= *ptr1) {
            sum += *ptr2;
            *ptr2 = 0;
        }
        else if (*ptr1 <= *ptr2) {
            sum += *ptr1;
            *ptr1 = 0;
        }
        counter++;
        bothC--;
    }
    cout << counter << " " << sum << endl;
    return 0;
}
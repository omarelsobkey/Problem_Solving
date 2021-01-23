// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	unsigned int n;
	cin >> n;
	unsigned int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			cout << "no\n";
			break;
		}
		else if (i == n - 1) {
			cout << "yes\n";
		}
	}

	return 0;
}
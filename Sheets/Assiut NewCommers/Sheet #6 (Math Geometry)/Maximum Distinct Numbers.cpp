// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/E

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	long long n, a;
	cin >> n;
	a = (1 + sqrt(1 + 8 * n)) / 2;
	while ((a * (a + 1)) / 2 > n) {
		a--;
	}
	cout << a << endl;
	return 0;
}
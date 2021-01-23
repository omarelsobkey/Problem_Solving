// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/I

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	double a, b;
	long long x, n1, n2;
	cin >> a >> b >> x;
	if (a > b)
		swap(a, b);
	
	n1 = (floor(b / x) * (floor(b / x) + 1)) / 2;
	n2 = (ceil(a / x) * (ceil(a / x) - 1)) / 2;

	cout << (n1-n2) * x << endl;
	return 0;
}
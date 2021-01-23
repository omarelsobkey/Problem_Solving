// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/D

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long a, b, q;
	cin >> a >> b >> q;
	if (q == 1) {
		cout << a << endl;
	}
	else if (q == 2) {
		cout << b << endl;
	}
	else {
		if (q % 3 == 0)
			cout << (a ^ b) << endl;
		else if (q % 3 == 1)
			cout << (b ^ (a ^ b)) << endl;
		else
			cout << ((a ^ b) ^ (b ^ (a ^ b))) << endl;
	}
	return 0;
}
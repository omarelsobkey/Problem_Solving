// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/H

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;

	if (max(a, b) % min(a, b) == 0) {
		cout << min(a, b) << " " << max(a, b) << endl;
	}
	else {
		long long GCD = 0;

		for (int i = 1; i <= sqrt(min(a, b)); i++) {
			if (min(a, b) % i == 0) {
				if ((max(a, b) % (min(a, b) / i) == 0) && (min(a, b) / i > GCD)) {
					GCD = min(a, b) / i;
				}
				else if ((max(a, b) % i == 0) && (min(a, b) / i > GCD)) {
					GCD = i;
				}
			}
		}
		for (int i = 2;; i++) {
			if ((max(a, b) * i) % min(a, b) == 0) {
				cout << GCD << " " << max(a, b) * i << endl;
				break;
			}
		}
	}
	
	return 0;
}
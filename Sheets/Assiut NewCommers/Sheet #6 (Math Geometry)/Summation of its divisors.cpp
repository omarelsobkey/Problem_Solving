// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/G

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	long long number, sum = 0;
	cin >> number;
	for (int i = 1; i <= sqrt(number); i++) {
		if (number % i == 0) {
			if (number / i == i) {
				sum += i;
			}
			else {
				sum += i + (number / i);
			}
			
		}
	}
	cout << sum << endl;

	return 0;
}
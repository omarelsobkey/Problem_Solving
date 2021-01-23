// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long a, b, sum, sumE, n;
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	sum = (b * (b + 1)) / 2 - ((a - 1) * a) / 2;
	if (a % 2 != 0 && b % 2 != 0) {
		n = ((b - 1) - (a + 1)) / 2 + 1;
		sumE = n * ((b - 1) + (a + 1)) / 2;
	}
	else if (a % 2 == 0 && b % 2 != 0) {
		n = ((b - 1) - a) / 2 + 1;
		sumE = n * ((b - 1) + a) / 2;
	}
	else if (a % 2 != 0 && b % 2 == 0) {
		n = (b - (a + 1)) / 2 + 1;
		sumE = n * (b + (a + 1)) / 2;
	}
	else {
		n = (b - a) / 2 + 1;
		sumE = n * (b + a) / 2;
	}


	cout << sum << endl << sumE << endl << sum - sumE << endl;
	
	return 0;

    
}
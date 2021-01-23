// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/K

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long fact(int number) {
	long long factorial = 1;
	for (int i = 1; i <= number; i++) {
		factorial *= i;
	}
	return factorial;
}
int main()
{
	int a, b;
	cin >> a >> b;
	if (a < b) {
		swap(a, b);
	}
	cout << fact(a) / (fact(a - b) * fact(b)) << " " << fact(a) / fact(a - b) << endl;
	return 0;
}
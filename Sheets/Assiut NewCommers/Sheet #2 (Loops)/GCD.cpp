// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	int number1, number2, minimum, devisor;
	cin >> number1 >> number2;

	minimum = min(number1, number2);

	for (int i = 1; i <= minimum; i++) {
		if ((number1 % i) == 0 && (number2 % i) == 0) {
			devisor = i;
		}
	}

	cout << devisor;

	return 0;
}
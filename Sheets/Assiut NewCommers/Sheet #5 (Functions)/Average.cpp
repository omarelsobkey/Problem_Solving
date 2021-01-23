// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double summation(int size) {
	double sum = 0, x;
	for (int i = 0; i < size; i++) {
		cin >> x;
		sum += x;
	}
	return sum;
}
int main()
{
	int size;
	cin >> size;
	cout << fixed << setprecision(7) << summation(size) / (double)size << endl;
	return 0;
}
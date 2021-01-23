// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void newArray(int size) {
	int a[size], b[size];
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < size; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < size; i++) {
		cout << b[i] << " ";
	}
	for (int i = 0; i < size; i++) {
		cout << a[i];
		if (i + 1 < size) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}
}
int main()
{
	int size;
	cin >> size;
	newArray(size);
	return 0;
}
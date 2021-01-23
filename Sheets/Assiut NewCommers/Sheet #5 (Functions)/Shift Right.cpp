// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K

#include <iostream>
using namespace std;
void shift(int size, int shift, int arr[]) {
	shift %= size;
	for (int i = size - shift; i < size; i++) {
		cout << arr[i] << " ";
	}
	for (int i = 0; i < size - shift; i++) {
		cout << arr[i];
		if (i == size - shift - 1) {
			cout << endl;
		}
		else {
			cout << " ";
		}
	}
}
int main()
{
	int n, x;
	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	shift(n, x, arr);
	return 0;
}
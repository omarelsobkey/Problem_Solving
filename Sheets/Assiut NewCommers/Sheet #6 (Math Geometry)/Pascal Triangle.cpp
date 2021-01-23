// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/L

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n][n];

	arr[0][0] = 1;
	arr[1][0] = 1;
	arr[1][1] = 1;

	for (int i = 2; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << arr[i][j];
			if (j == i)
				cout << endl;
			else
				cout << " ";
		}
	}
	return 0;
}
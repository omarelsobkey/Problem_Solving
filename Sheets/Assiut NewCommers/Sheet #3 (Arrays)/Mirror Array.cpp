// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

#include <iostream>
using namespace std;
int main()
{
	unsigned short n, m;
	cin >> n >> m;
	unsigned long long arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
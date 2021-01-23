// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <iostream>
using namespace std;
int main()
{
	bool state = false;
	unsigned short n, m;
	cin >> n >> m;

	unsigned int arr[n][m], x;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> x;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (x == arr[i][j]) {
				state = true;
				break;
			}
		}
		if (state == true) {
			break;
		}
	}
	if (!state) {
		cout << "will take number\n";
	}
	else {
		cout << "will not take number\n";
	}

	return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I

#include <iostream>
#include <algorithm>
using namespace std;
int n, x, y, matrix[500][500];
void swapMatrix() {
	swap(matrix[x-1], matrix[y-1]);
	
	for (int i = 0; i < n; i++) {
		swap(matrix[i][x-1], matrix[i][y-1]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j];
			if (j < n - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main()
{
	cin >> n >> x >> y;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	swapMatrix();
	return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

#include <iostream>
using namespace std;
int main()
{
	unsigned short n;
	unsigned int operationsCounter = 0;
	cin >> n;

	unsigned long long arr[n];

	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] /= 2;
		}
		else {
			break;
		}

		if (i == n - 1) {
			operationsCounter++;
			i = -1;
		}
	}
	cout << operationsCounter << endl;
	return 0;
}
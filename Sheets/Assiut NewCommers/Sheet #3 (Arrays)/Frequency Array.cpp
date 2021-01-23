// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <iostream>
using namespace std;
int main()
{
	unsigned int n, m, counter;
	cin >> n >> m;
	unsigned int arr[n], frequence[m] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		frequence[arr[i] - 1]++;
	}

	for (int i = 0; i < m; i++) {
		cout << frequence[i] << endl;
	}
	return 0;
}
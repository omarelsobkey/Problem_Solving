// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

#include<iostream>
using namespace std;
void max_min(int size, int arr[])
{
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		else if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << min << " " << max << endl;
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	max_min(n, arr);
	return 0;
}
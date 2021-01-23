// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void count(int size, int arr[]) {
	sort(arr, arr + size);
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (i == 0 && arr[i] != arr[i + 1]) {
			counter++;
		}
		else if (arr[i] != arr[i - 1]) {
			counter++;
		}
	}
	cout << counter << endl;
}
int main()
{
	int size;
	cin >> size;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	count(size, arr);
	return 0;
}
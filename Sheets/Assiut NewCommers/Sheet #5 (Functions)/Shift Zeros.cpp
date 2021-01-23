// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, numberOfZ = 0, arr[1000], helper, index = 0;
	cin >> n;
	while (n--) {
		cin >> helper;
		if (helper == 0) {
			numberOfZ++;
		}
		else {
			arr[index] = helper;
			index++;
		}
	}

	for (int i = 0; i < index; i++) {
		
		cout << arr[i];
		if (numberOfZ == 0 && i == index - 1) {
			cout << endl;
		}
		else {
			cout << " ";
		}
	}
	for (int i = 0; i < numberOfZ; i++) {
		cout << 0;
		if (i == numberOfZ - 1) {
			cout << endl;
		}
		else {
			cout << " ";
		}
	}
	return 0;
}
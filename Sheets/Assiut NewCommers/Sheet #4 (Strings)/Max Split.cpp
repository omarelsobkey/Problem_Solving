// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int number, index = 0, item1 = 0, item2 = 0;
	string word, subWords[500] = { "" };
	bool changed = false;
	cin >> word;
	for (char x : word) {
		if (changed && (item1 == item2)) {
			index++;
			changed = false;
			item1 = item2 = 0;
		}

		subWords[index] += x;

		if (x != subWords[index][0]) {
			changed = true;
			item2++;
		}
		else {
			item1++;
		}
	}
	cout << index + 1 << endl;
	while (index >= 0) {
		cout << subWords[index] << endl;
		index--;
	}
	return 0;
}
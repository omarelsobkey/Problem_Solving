// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	bool state = false;
	string hello = "hello";
	string input;
	cin >> input;
	for (char x : input) {
		if (x == hello[0]) {
			hello.erase(0, 1);
		}
		if (hello == "") {
			state = true;
		}
	}
	if (state) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
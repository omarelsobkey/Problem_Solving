// https://codeforces.com/problemset/problem/791/A

#include<iostream>
using namespace std;

int main()
{

	unsigned short limakW, bobW, counter = 0;
	cin >> limakW >> bobW;
	while (true) {
		limakW *= 3;
		bobW *= 2;
		counter++;
		if (limakW> bobW) {
			break;
		}
	}
	cout << counter << endl;
	return 0;
}
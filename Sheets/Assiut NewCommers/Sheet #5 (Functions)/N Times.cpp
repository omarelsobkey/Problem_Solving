// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include<iostream>
using namespace std;
void print(int number, char character)
{
	while (number--) {
		if (number == 0) {
			cout << character << endl;
		}
		else {
			cout << character << " ";
		}
	}
}
int main()
{
	int t, n;
	char character;
	cin >> t;
	while (t--) {
		cin >> n >> character;
		print(n, character);
	}
	return 0;
}
// https://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;
#define endl '\n'

int main() {
	int alpha[26] = { 0 }, n;
	string word;
	cin >> n >> word;
	if (n < 26) {
		cout << "NO\n";
	}
	else {
		int counter = 0;
		for (char x : word) {
			alpha[tolower(x) - 'a']++;
		}
		for (int x : alpha) {
			if (x > 0)	counter++;
			else        break;
		}
		(counter == 26 ? cout << "YES\n" : cout << "NO\n");
	}
	return 0;
}
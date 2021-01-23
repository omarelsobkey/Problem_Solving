// https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main()
{
	int l, a = 0, d = 0;
	string score;
	cin >> l >> score;
	for (char x : score) {
		(x == 'A' ? a++ : d++);
	}

	if (a > d)
		cout << "Anton\n";
	else if (a < d)
		cout << "Danik\n";
	else
		cout << "Friendship\n";
	return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string word;
	int e, g, y, p, t, number;
	e = g = y = p = t = number = 0;
	cin >> word;
	for (char x : word) {
		x = tolower(x);
		if (x == 'e') {
			e++;
		}
		else if (x == 'g') {
			g++;
		}
		else if (x == 'y') {
			y++;
		}
		else if (x == 'p') {
			p++;
		}
		else if (x == 't') {
			t++;
		}
	}
	while (e > 0 && g > 0 && y > 0 && p > 0 && t > 0) {
		number++;
		e--;
		g--;
		y--;
		p--;
		t--;
	}
	cout << number << endl;

	return 0;
}
// https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main()
{
	unsigned short n, Petya, Vasya, Tonya, counter = 0, number;
	cin >> n;
	while (n--) {
		cin >> Petya >> Vasya >> Tonya;
		if (Petya + Vasya + Tonya > 1) {
			counter++;
		}

	}
	cout << counter << endl;
	return 0;
}
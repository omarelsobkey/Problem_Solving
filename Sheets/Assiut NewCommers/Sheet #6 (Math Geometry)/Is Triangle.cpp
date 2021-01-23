// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/S

#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c, help;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		help = (a + b + c) / 2;
		cout << fixed << setprecision(6) << "Valid\n" << sqrt(help * (help - a) * (help - b) * (help - c)) << endl;
	}
	else
		cout << "Invalid\n";
	return 0;
}
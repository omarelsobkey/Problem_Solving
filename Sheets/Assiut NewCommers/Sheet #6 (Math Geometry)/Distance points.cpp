// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/R

#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << fixed << setprecision(9) << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	return 0;
}
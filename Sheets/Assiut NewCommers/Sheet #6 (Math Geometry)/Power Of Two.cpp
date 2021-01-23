// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long number;
	cin >> number;
	if ((int)log2(number) == log2(number))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
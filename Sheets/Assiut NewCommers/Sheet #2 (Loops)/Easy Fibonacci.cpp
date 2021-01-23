// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <iostream>
using namespace std;
int main()
{
	int n, counter = 1, sum1 = 0, sum2 = 1, f = 0;
	cin >> n;
	while (counter <= n)
	{
		f = sum1 + sum2;
		cout << sum1 << " ";
		sum1 = sum2;
		sum2 = f;
		counter++;
	}

	return 0;
}
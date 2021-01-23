// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

#include <iostream>
using namespace std;
int main()
{
	unsigned short n;
	cin >> n;

	long long fib[n];
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2 ; i < n ; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	cout << fib[n - 1] << endl;
	return 0;
}
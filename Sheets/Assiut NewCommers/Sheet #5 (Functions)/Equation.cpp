// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

#include<iostream>
#include <cmath>
using namespace std;
long long power(int x, int n)
{
	long long sum = 0;
	for (int i = 2; i <= n; i += 2) {
		sum += pow(x, i);
	}
	return sum;
}
int main()
{
	int x, n;
	cin >> x >> n;
	cout << power(x, n) << endl;
	return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long number;
	bool state = true;
	cin >> number;
	if (number == 1)
	{
		state = false;
	}
	else if (number == 2)
	{
		state = true;
	}
	else if (number % 2 == 0)
	{
		state = false;
	}
	else {
		for (long long i = 3; i <= sqrt(number); i++) {
			if (number % i == 0) {
				state = false;
				break;
			}
		}
	}
	
	if (state) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;

    
}
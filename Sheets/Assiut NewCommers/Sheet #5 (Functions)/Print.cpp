// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include<iostream>
using namespace std;
void loop(int number)
{
	for (int i = 1; i <= number; i++) {
		cout << i;
		if (i < number ) {
			cout << " ";
		}
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	loop(n);
	return 0;
}
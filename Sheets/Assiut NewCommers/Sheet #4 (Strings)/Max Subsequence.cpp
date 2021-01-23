// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N

#include <iostream>
using namespace std;
int main()
{
	int n, counter;
	string word;
	cin >> n;
	cin >> word;
	counter = n;
	for (int i = 0; i < n-1; i++) {
		if (word[i] == word[i + 1]) {
			counter--;
		}
	}
	cout << counter << endl;
	return 0;
}
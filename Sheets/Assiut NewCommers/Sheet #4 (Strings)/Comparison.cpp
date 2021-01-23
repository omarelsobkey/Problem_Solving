// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string word, sub1="",sub1M, sub2, smallest;
	cin >> word;
	smallest = word;
	for (int i = 0; i < word.length()-1; i++) {
		sub1 += word[i];
		sub1M = sub1;
		sub2 = word;
		sub2.erase(0, i + 1);
		sort(sub1M.begin(), sub1M.end());
		sort(sub2.begin(), sub2.end());
		if (sub1M + sub2 < smallest) {
			smallest = sub1M + sub2;
		}
	}
	cout << smallest << endl;
	return 0;
}
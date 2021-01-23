// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int mode;
	string word,
		Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",
		Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	cin >> mode;
	cin >> word;
	if (mode == 1) {
		for (char &x : word) {
			x = Key[Original.find(x)];
		}
	}
	else {
		for (char &x : word) {
			x = Original[Key.find(x)];
		}
	}
	cout << word << endl;
	return 0;
}
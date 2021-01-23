// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n, q, l, r, pos;
	char x;
	string word, operation;

	cin >> n >> q;
	cin >> word;
	while (q--) {
		cin >> operation;

		if (operation == "pop_back") {
			word.pop_back();
		}

		else if (operation == "front") {
			cout << word[0] << endl;
		}

		else if (operation == "back") {
			cout << word[word.length() - 1] << endl;
		}

		else if (operation == "sort") {
			cin >> l >> r;
			if (l > r) {
				swap(l, r);
			}
			sort(word.begin() + (l - 1), word.begin() + r);
		}

		else if (operation == "reverse") {
			cin >> l >> r;
			if (l > r) {
				swap(l, r);
			}
			reverse(word.begin() + (l - 1), word.begin() + r);
		}

		else if (operation == "print") {
			cin >> pos;
			cout << word[pos - 1] << endl;
		}

		else if (operation == "push_back") {
			cin >> x;
			word += x;
		}

		else if (operation == "substr") {
			cin >> l >> r;
			if (l > r) {
				swap(l, r);
			}
			cout << word.substr(l - 1, r - l + 1) << endl;
		}

	}
	return 0;
}
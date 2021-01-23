// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R

#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long length;
	string word;
	cin >> length;
	cin >> word;
	int score = 0;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == 'V') {
			score += 5;
		}

		else if (word[i] == 'W') {
			score += 2;
		}

		else if (word[i] == 'X' && i != (word.length() - 1)) {
			i++;
		}

		else if (word[i] == 'Y' && i != (word.length() - 1)) {
			word += word[i + 1];
			i++;
		}
		else if (word[i] == 'Z' && i != (word.length() - 1)) {
			if (word[i + 1] == 'V') {
				score /= 5;
				i++;
			}
			else if (word[i + 1] == 'W') {
				score /= 2;
				i++;
			}
		}
	}
	cout << score << endl;
	return 0;
}
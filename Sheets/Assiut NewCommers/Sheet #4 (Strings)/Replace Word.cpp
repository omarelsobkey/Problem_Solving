// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word, subString = "";
	cin >> word;
	long long length = word.length();
	if (word[length - 5] == 'E') {
		subString += word[length - 5];
		subString += word[length - 4];
		subString += word[length - 3];
		subString += word[length - 2];
		subString += word[length - 1];
		if (subString == "EGYPT") {
			word[length - 5] = ' ';
			word.erase(length - 4, 4);
			length -= 4;
		}
		subString = "";
	}
	for (int i = 0; i < length; i++) {
		if (word[i] == 'E') {
			subString += word[i];
			subString += word[i + 1];
			subString += word[i + 2];
			subString += word[i + 3];
			subString += word[i + 4];
			if (subString == "EGYPT") {
				word[i] = ' ';
				word.erase(i + 1, 4);
				length -= 4;
			}
			subString = "";
		}
	}
	cout << word << endl;
	return 0;
}
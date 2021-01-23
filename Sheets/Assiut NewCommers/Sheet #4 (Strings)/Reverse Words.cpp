// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string sentence, word = "";
	getline(cin, sentence);
	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] != ' ') {
			word += sentence[i];
		}
		else if (sentence[i] == ' ') {
			reverse(word.begin(), word.end());
			cout << word << sentence[i];
			word = "";
		}
		if ((sentence[i] != ' ') && (i == sentence.length() - 1)) {
			reverse(word.begin(), word.end());
			cout << word;
		}
	}
	cout << endl;
	return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

#include <iostream>
#include <string>
#include<cctype>
using namespace std;
int main()
{
	string word;
	int wordsCount = 0;
	getline(cin, word);
	
	for (int i = 0; i < word.length(); i++) {
		if (isalpha(word[i]) && !isalpha(word[i + 1])) {
			wordsCount++;
		}
	}
	cout << wordsCount << endl;
	return 0;
}
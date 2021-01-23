// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int maximumNumber = 0, minimumNumber = 100;
int primeCounter = 0;
int maxNumberOfDiv = 0, theNumber;
int palindromeCounter = 0;

void max(int number) {
	if (number > maximumNumber)
		maximumNumber = number;
}
void min(int number) {
	if (number < minimumNumber)
		minimumNumber = number;
}

void prime(int number) {
	bool state = true;
	if (number == 1)
		state = false;
	else if (number == 2) {}
	else if (number % 2 == 0)
		state = false;
	else {
		for (int j = 3; j <= sqrt(number); j += 2) {
			if (number % j == 0) {
				state = false;
				break;
			}
		}
	}
	if (state)
		primeCounter++;
}

void palindrome(int n) {
	string number = "", numberR = "";
		number = to_string(n);
		numberR = number;
		reverse(numberR.begin(), numberR.end());
		if (number == numberR) {
			palindromeCounter++;
		}
}

void numberOfDevisors(int number) {
	int numberOfDiv = 0;
	for (int i = 1; i <= sqrt(number); i++) {
		if (number % i == 0&&i<sqrt(number)) {
			numberOfDiv += 2;
		}
		else if (number % i == 0 && i == sqrt(number)) {
			numberOfDiv++;
		}
	}

	if (numberOfDiv > maxNumberOfDiv) {
		maxNumberOfDiv = numberOfDiv;
		theNumber = number;
	}
	else if (numberOfDiv == maxNumberOfDiv && theNumber < number) {
		theNumber = number;
	}
}

int main()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
		max(a[i]);
		min(a[i]);
		prime(a[i]);
		palindrome(a[i]);
		numberOfDevisors(a[i]);
	}

	cout << "The maximum number : " << maximumNumber << endl;
	cout << "The minimum number : " << minimumNumber << endl;
	cout << "The number of prime numbers : " << primeCounter << endl;
	cout << "The number of palindrome numbers : " << palindromeCounter << endl;
	cout << "The number that has the maximum number of divisors : " << theNumber << endl;
	return 0;
}
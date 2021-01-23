// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string url;
	cin >> url;
	cout << "username: ";
	for (int i = url.find("username") + 9; url[i] != '&'; i++) {
		cout << url[i];
	}
	
	cout << "\npwd: ";
	for (int i = url.find("pwd") + 4; url[i] != '&'; i++) {
		cout << url[i];
	}

	cout << "\nprofile: ";
	for (int i = url.find("profile") + 8; url[i] != '&'; i++) {
		cout << url[i];
	}

	cout << "\nrole: ";
	for (int i = url.find("role") + 5; url[i] != '&'; i++) {
		cout << url[i];
	}

	cout << "\nkey: ";
	for (int i = url.find("key") + 4; url[i] != '\0'; i++) {
		cout << url[i];
	}
	cout << endl;
	return 0;
}
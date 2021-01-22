// https://codeforces.com/problemset/problem/999/C?fbclid=IwAR0PtgeffIZx654yARExpaUuGmgD8-x_cyi3fCDV9TaL8BZoj6Bzub2TZkw

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>
#include <memory.h>

using namespace std;

int freq[26];

int main()
{
    int n, k;
    string word, output = "";
    cin >> n >> k;
    cin >> word;
    for (char x : word) freq[x - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (freq[i] >= k) {
            freq[i] -= k;
            k = 0;
        }
        else {
            k -= freq[i];
            freq[i] = 0;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (freq[word[i] - 'a']) {
            freq[word[i] - 'a']--;
            output += word[i];
        }
    }
    reverse(output.begin(), output.end());
    cout << output << endl;
    return 0;
}
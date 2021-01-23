// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int N, A, B, sum = 0, sumOfD = 0;
    cin >> N >> A >> B;
    A = min(A, B);
    B = max(A, B);

    // get numbers from 1 to n
    for (int i = 1; i <= N ; i++) {
        int helper = i;
        // check that [  min(A,B) <= the sum of the digits <= max(A,B)  ] 
        for (int j = 0; j < 5; j++) {
            sumOfD += helper % 10;
            helper /= 10;
        }
        
        if (sumOfD >= A && sumOfD <= B) {
            sum += i;
        }
        sumOfD = 0;
    }

    cout << sum;
    return 0;
}
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=532

#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0, arr[50], rf, num = 1;

    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        rf = sum / n;
        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (rf < arr[i])
                sum += arr[i] - rf;
        }
        cout << "Set #" << num++ << endl;
        cout << "The minimum number of moves is " << sum << "." << endl << endl;
        sum = 0;

    }


    return 0;
}

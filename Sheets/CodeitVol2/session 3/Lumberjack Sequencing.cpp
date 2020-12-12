// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3093

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[10];

    cout << "Lumberjacks:" << endl;

    while (n--){
        int f1 = 1, f2 = 1;

        for (int i = 0; i < 10; ++i)
            cin >> arr[i];

        for (int i = 1; i < 10; ++i){
            if (arr[i] < arr[i - 1])
                f1 = 0;

            if (arr[i] > arr[i - 1])
                f2 = 0;
        }

        if (f1 != f2)
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;

    }

    return 0;
}

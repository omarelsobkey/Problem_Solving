// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <iostream>
using namespace std;
int main()
{
    int n, Even = 0, ODD = 0, Positive = 0, Negative = 0;
    cin >> n;
 
    for (int i = 1 ; i <= n ; i++ ){
        int y = 0;
        cin >> y;
        
        if ( y % 2 == 0){ Even ++;} 
        else { ODD ++; }
        
        if ( y == 0) {} 
        else if ( y > 0 ){ Positive ++; }
        else { Negative ++; }
    }
    
    cout << "Even: " << Even << endl ;
    cout << "Odd: " << ODD << endl ;
    cout << "Positive: " << Positive <<  endl;
    cout << "Negative: " << Negative << endl;
    return 0;
}
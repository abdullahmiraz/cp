#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((b <= a && a <= c) || (b >= a && a >= c)){ // for a
        cout << a << endl;
    }else if ((a <= b && b <= c) || (a >= b && b >= c)){ // for b
        cout << b << endl;
    }else if ((a <= c && c <= b) || (a >= c && c >= b)){ // for c
        cout << c << endl;
    }else{ // all are equal
        cout << a << endl;
    }
}
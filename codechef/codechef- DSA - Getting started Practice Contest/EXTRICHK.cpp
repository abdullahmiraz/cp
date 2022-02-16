#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int a , b ,c ;
    cin >> a >> b >> c ;
    if(a+b > c && b+a > c && c+b > a)
    {
        if(a !=b && b!=c){ // scalene - 3 different edges
        cout << 3 << endl ;
        }else if(a==b && b==c){ // equilateral - 3 same edges
            cout << 1 << endl ;
        }else if(a==b ||b==c || c==a ){ //  Isosceles - 2 different edges 
            cout << 2 << endl ;
        }else{
            cout << -1 << endl ;
        }
    }else{
        cout << -1 << endl ;
    }
}
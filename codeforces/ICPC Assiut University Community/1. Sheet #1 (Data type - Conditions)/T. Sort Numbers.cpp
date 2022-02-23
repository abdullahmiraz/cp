#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    int a , b, c , s, m, l;
    cin >>a>>b>>c ;
    // sorting 
    int arr[3] = {a, b, c} ;
    sort(arr, arr+3) ;
    cout << arr[0] << endl ;
    cout << arr[1] << endl ;
    cout << arr[2] << endl << endl ;
    // 2nd print
    cout << a << endl ;
    cout << b << endl ;
    cout << c << endl    ;
}
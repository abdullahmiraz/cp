#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    char x ;
    cin >> x ;
    if((int)x >= 48 && (int)x <= 57){
        cout << "IS DIGIT" << endl ;
    }
    if((int)x >= 65 && (int)x <= 90){
        cout << "ALPHA" << endl << "IS CAPITAL" << endl ;
    }
    if((int)x >= 97 && (int)x <= 122){
        cout << "ALPHA" << endl << "IS SMALL" << endl ;
    }
}

#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    lli a, b ;
    char c ;
    cin >> a >> c >> b ;
    if(c=='>'){
        if(a>b)cout << "Right" << endl ;
        else cout << "Wrong" << endl ;
    }
    if(c=='<'){
        if(a<b)cout << "Right" << endl ;
        else cout << "Wrong" << endl ;
    }
    if(c=='='){
        if(a==b)cout << "Right" << endl ;
        else cout << "Wrong" << endl ;
    }
}
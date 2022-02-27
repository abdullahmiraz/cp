#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    lli a, b, c, d ;
    double p, q ;
    cin >> a >> b >> c >> d ;
    p = b*log(a) ; // log.n(a^b) = b*log.n(a) ;
    q = d*log(c) ;
    if(p> q)cout << "YES" << endl ;
    else cout << "NO" << endl ;
    cout << p << endl << q ;

    return 0 ;
}
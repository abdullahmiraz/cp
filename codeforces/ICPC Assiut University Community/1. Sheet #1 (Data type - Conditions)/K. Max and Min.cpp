#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    // fast input out template: 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // -----------------------
    lli test[3] ;
    cin >> test[0] >> test[1] >> test[2] ;
    sort(test, test+3) ;
    cout << test[0] << " " << test[2] << endl;

}
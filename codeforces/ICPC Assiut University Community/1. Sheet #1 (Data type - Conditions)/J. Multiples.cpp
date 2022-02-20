#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    lli a, b ;
    while(cin >> a >> b ){
        if(a%b == 0 || b%a==0){
            cout << "Multiples" << endl ;
        }else{
            cout << "No Multiples" << endl ;
        }
    }
}
#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    float a;
    cin >> a ;
    int b = a ;
    if(a-b==0){
        cout << "int " << int(a) ;
    }else{
        cout << "float " << int(a) << " " << fixed << setprecision(3) <<  float(a-b) ;
    }
}
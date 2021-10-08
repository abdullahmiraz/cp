// https://www.hackerrank.com/challenges/30-arrays/problem
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ; cin >> n ;
    int myarr[n] ;
    for(int i=0 ; i< n; ++i){
        cin >> myarr[i] ;
    }
    for(int i=n-1 ; i>=0 ;--i){
        cout << myarr[i] << " " ;
    }
}
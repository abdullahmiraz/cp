#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int k = 0 ;
    int myarr[n] ;
    for(int i = 1 ;i<=n ;i++){
        if(n%i==0){
            myarr[k] = i ;
            k++ ;
        }
    }
    cout << k << endl ;
    for(int j = 0 ;j<k; j++){
        cout << myarr[j] << " "  ;
    }

}
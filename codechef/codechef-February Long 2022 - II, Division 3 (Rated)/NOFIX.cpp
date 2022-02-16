#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n ; /*input of array size*/
        int a[n] ;
        int klimit_itr = 0 ;

        for(int i = 0;i<n ;i++){
            cin >> a[i] ;
        }
        int klimit = *max_element(a, a+n) ;
        cout << klimit << endl ;

        for(int j = 0 ; j<klimit ; j++){
            
        }
    }
}
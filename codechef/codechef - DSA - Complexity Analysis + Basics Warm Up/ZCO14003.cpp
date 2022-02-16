#include <bits/stdc++.h>
using namespace std ;
using ll = long long int ;
int main(){
    ll n ;
    cin >> n;
    ll arr[n] ;
    for(ll i = 0 ;i<n ;i++){
        cin >> arr[i] ;
    }
    sort(arr, arr+n) ; 
    ll max = arr[n-1] ;  //asc. sorting & getting the max value

    for(ll i = n-2 ;i>=0;i--){ // n-1 means the last element && n-2 means one less iteration as we've stored the max value in max variable already 
        ll set = (n-i)*arr[i];
        if(set>max){
            max = set ;
        }
    }
    cout << max << endl ;

    return 0 ;
}


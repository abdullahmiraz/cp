#include <bits/stdc++.h>
using namespace std ;
//https://www.geeksforgeeks.org/std-find-in-cpp/
// using array solving the problem
int main(){
    int n,k , ans ;
    cin >> n >> k ;
    int arr[n] ;
    for(int i =0;i<n ;i++){
        cin >> arr[i] ;
    }
    for(int i = 0 ;i<n ;i++){
        if(arr[i]==k){
            ans = 1;break;
        }else{
            ans= -1 ;
        }
    }

    cout << ans  << endl ;
}
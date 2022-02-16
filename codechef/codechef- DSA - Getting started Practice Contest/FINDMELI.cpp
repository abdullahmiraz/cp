#include <bits/stdc++.h>
using namespace std ;
//https://www.geeksforgeeks.org/std-find-in-cpp/
// using vector solving the problem
int main(){

    int n, k ;
    cin >> n >> k ;
    vector<int>arr ;
    vector<int>::iterator itr ;
    // input
    for(int i = 0;i<n;i++){
        int x ; cin >> x ;
        arr.push_back(x);
    }
    // finding using find & iterator 
    itr = find(arr.begin(), arr.end(), k) ;
    if(itr - arr.begin() < n){
        // if found the value will always be less than n(limit)
        // return location of the found digit
        cout << 1 << endl ;
    }else{cout << -1 <<endl ;} // else return the n itself


}
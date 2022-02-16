#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ; cin >> n ;
    vector<int>myarr ;

    for(int i = 0;i<n ;i++){
        int x ; cin >> x ;
        myarr.push_back(x) ;
    }
    reverse(myarr.begin(), myarr.end()) ;
    for(auto i: myarr ){
        cout << i << " " ;
    }
    
    
}
/*
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int a, b, c ;
    cin >> a >> b >> c ;
    if(a+b < c || b+c < a || a+c < b){ // sum of other two will always be greater than the third one
        cout << "NO" ;
    }else{cout << "YES" ;}
    
    
}
*/
// approach 2 
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int a, b, c ;
    cin >> a >> b >> c ;
    if(a+b > c && b+c > a && a+c > b){
        cout << "YES" ;
    }else{cout << "NO" ;}
    
    
}
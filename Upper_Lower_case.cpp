// https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
using namespace std ;
int main(){
    int up = 0, low = 0, eq = 0 ;
    string s ;
    cin >> s ;
    
    for(int i = 0 ; i< s.length(); i++){
        if(islower(s[i])){
            low++ ;
        }else if(isupper(s[i])){
            up++ ;
        }
    }
    
    if(up > low){
        transform(s.begin(), s.end(), s.begin(), ::toupper) ;
        cout << s ;
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower) ;
        cout << s ;
    }
}

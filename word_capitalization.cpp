#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin >> s;
    /* basic logic 
    if((int)s[0] > 96){
        s[0] = s[0]-32;
        cout << s[0] ;
    }else{
        cout << s[0] ;
    }
    */
    /* alternative */
    if(islower(s[0])){
        cout << (char)toupper(s[0]) ;
    }else{
        cout << s[0] ;
    }
    
    for(int i=1 ; i< s.size() ;i++ ) {
        cout << s[i] ;
    }
    
}
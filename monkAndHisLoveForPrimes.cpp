// https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/
#include <bits/stdc++.h>
using namespace std ;
int main(){
    string s ;
    cin >> s ;
    int low = 0 , up = 0, X = 0 ;
    for(int i=0;i< s.size(); ++i){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
            low += int(s[i]);
        }
        else if(islower(s[i])){
            s[i] = toupper(s[i]);
            up += int(s[i]);
        }
        
        // cout << s[i] ;
    }
    X = abs(low - up) ;
    // cout << X ;
    if(X%2 == 0){
        // cout << "not prime" << endl; 
        cout << 0 ;
    }else{
        for(int i = 3; i< X/2 ;i++){
            if(X%i == 0){
                // cout << "not prime" << endl; 
                cout <<  0;break;
            }else{
                // cout << " prime" << endl; 
                cout << 1 ; break;
            }
        }
    }
}
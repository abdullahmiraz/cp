#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;int counter = 0 ;
    cin >> s ;
    int strsize =  s.size() ;
    int myarr[strsize] ;

    for(int i = 0 ; i<strsize ; i++){
        if(s[i] <='9' && s[i] >= '0'){            
            myarr[counter] = s[i] - '0' ;
            // cout << myarr[counter] << endl ;
            counter++ ;
        }
    }
    sort(myarr, myarr+counter) ;

    int arrsize = sizeof(myarr) / sizeof(myarr[0]) ;

    int test = counter ;
    for(int i=0 ;i< counter ; i++){
        cout << myarr[i] ;
        if(i == counter-1)
        {
        break;
        }cout << "+" ;
    }
}

/*
1+3+3+5+5+7+2+8
*/

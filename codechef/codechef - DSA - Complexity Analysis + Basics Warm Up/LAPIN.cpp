#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    // cin >> t ;
    // while(t--)
    {
        string s = "rotor";
        int len = s.length();
        char myarr[len] ;
        for(int i =0;i<len/2;i++){
            myarr[i]=s[i] ;
        }

        for(int i =len-1;i>=(len/2)+1;i--){
           // cout << s[i] << endl;
            if(s[i]== myarr[len-i]){
                cout << s[i] << ":" << myarr[len-i]  << endl ;
            }else{
                cout << i<< ":" << len-i  << endl ;

            }
        }
        
        
    }
    
}   
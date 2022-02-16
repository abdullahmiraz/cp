
#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    ios_base::sync_with_stdio(false) ;
    ll n ;
    cin >> n ;
    cout << n*n << " " << n*(n+1) ;
    //The formula is: Sum of Even Numbers Formula = n(n+1) ;sum of odd (n*n)  ;where n is the number of terms in the series.
}

/*
// approach 1 
#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    ll n, s_odd=0, s_even=0, cntodd=0, cnteven=0 ;
    cin >> n ;

    for(int i =1; ; i++){
        if(i%2==0){
            s_even+=i ;
            cnteven+=1 ;
        }else{
            s_odd+=i ;
            cntodd+=1;
        }
        if(cnteven ==n && cntodd==n){
            break ;
        }
    }

    cout << s_odd << " " << s_even ;
    
}

*/
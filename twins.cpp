#include <bits/stdc++.h>
using namespace std ;
int main(){
    int temp, n;
    cin >> n ;
    int total = 0, count = 0 ;
    int list[n] ;

    for(int i =0 ;i<n ;i++){
        cin >> list[i] ;
        total  = total + list[i] ;
    }
    for(int i =0 ;i<n ;i++){
        for(int j =i+1 ;j<n ;j++){
            if(list[j] > list[i]){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        
    }


    int total2 = 0 ;
    for(int i =0 ; i<n ;i++){
        total2 += list[i] ;
        count++ ;
        if(total2 > total/2) break ;

    }
    cout << count ;
}
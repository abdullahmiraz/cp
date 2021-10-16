#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;

    cin >> n ;
    int counter = 0 ; 
    int first=0, second=0, third=0 ;
    int arr[n][3] ;
    
    for(int i =0 ;i<n ;i++){
        for(int j=0; j<3 ;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i<3 ;i++){
        for(int j=0;j<n ;j++){
            first = first+ arr[j][i] ;
            // cout << "j: " << j << " i: " << i << endl ;
        }
        if(first==0){
            counter++ ;
        }
        // cout << endl ;
        // cout << first << endl ;
        // cout << counter << endl ;
    }

    if(first == 0 && counter ==3){
        cout << "YES" ;
    }else{
        cout << "NO" ;
    }
}
/*
3
0 2 -2
1 -1 3
-3 0 0
NO

----

23
-70 37 78
42 84 6
28 -94 -24
-49 76 95
-67 18 84
-53 78 -5
65 -63 -64
-66 -64 -69
81 -93 95
10 52 -79
-89 -61 -64
-64 -47 43
-81 -35 55
80 82 73
-60 -81 -18
49 -10 -19
-58 70 12
-24 -15 -93
98 -93 -54
-28 -75 11
100 100 -63
100 100 0
56 34 0

YES

*/
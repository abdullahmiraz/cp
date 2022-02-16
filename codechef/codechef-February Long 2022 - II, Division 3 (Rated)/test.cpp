#include <bits/stdc++.h>
using namespace std;

int main(){
    int x[] = {23,34,2, 8, 8, 9 , 72, 3} ;
    int len = sizeof(x)/sizeof(x[0]) ;
    int test = *max_element(x, x+len);

    cout << test << endl ;
}
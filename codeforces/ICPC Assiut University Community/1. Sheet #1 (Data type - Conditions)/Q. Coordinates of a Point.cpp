#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    float x , y ;
    cin >> x >> y ;

    if(x>0 && y>0){ // co-ordinate 1 (+,+)
        cout << "Q1" << endl ;
    }
    else if(x<0 && y>0){ // co-ordinate 2 (-,+)
        cout << "Q2" << endl ;
    }
    else if(x<0 && y<0){ // co-ordinate 3 (-,-)
        cout << "Q3" << endl ;
    }
    else if(x>0 && y<0){ // co-ordinate 4 (+,-)
        cout << "Q4" << endl ;
    }
    if(x==0 && y==0){
        cout << "Origem" << endl ;
    }else if(y==0){
        cout << "Eixo X" << endl ;
    }else if(x==0){
        cout << "Eixo Y" << endl ;
    }

}
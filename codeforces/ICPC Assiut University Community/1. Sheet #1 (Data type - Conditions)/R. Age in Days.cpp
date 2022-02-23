#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    lli d ;
    cin >> d ;
    int year, month, days ;
    year = d/365 ;
    month = (d-(365*year))/30 ;
    days = d-((year*365)+(30*month)) ;
    cout << year << " years" << endl ;
    cout << month << " months" << endl ;
    cout << days << " days" << endl ;
}
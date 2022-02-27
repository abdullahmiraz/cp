
//version 2 = easier version 
#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    lli a, b, e, result ;
    char c, d ;
    cin >> a >> c >> b >> d >> e;
    if(c=='+'){
        if(a+b == e)cout << "Yes" << endl ;
        else cout << a+b << endl ;
    }
    else if(c=='-'){
        if(a-b == e)cout << "Yes" << endl ;
        else cout << a-b << endl ;
    }
    else if(c=='*'){
        if(a*b == e)cout << "Yes" << endl ;
        else cout << a*b << endl ;
    }
    
}

/* bugged version : check later 
// version 1 = complicated version : taken whole input as string 
#include <bits/stdc++.h>
using namespace std ;
using lli = long long int ;
int main(){
    string s ;
    getline(cin, s) ;

    lli  i, a=0, b=0, c=0 ;
    for(i = 0;i<s.size();i++){
        if(isspace(s[i]))continue ;
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')break ;
        a=a*10+(s[i]-'0') ;
    }
    char ch=s[i] ;
    
    for(i=i+1;i<s.size();i++){
        if(isspace(s[i]))continue ;
        if(s[i]=='=')break ;
        b=b*10+(s[i]-'0') ;
    }
    for(i=i+2;i<s.size();i++){
        c = c*10+(s[i]-'0') ;
    }
    lli result   ;
    if(ch=='+'){
        if(a+b== c)cout << "Yes" << endl ;
        else cout << a+b << endl ;
    }
    if(ch=='-'){
        if(a-b== c)cout << "Yes" << endl ;
        else cout << a-b << endl ;
    }
    if(ch=='*'){
        if(a*b== c)cout << "Yes" << endl ;
        else cout << a*b << endl ;
    }
    cout << a << " " << b << " " << c << endl ;

}
*/

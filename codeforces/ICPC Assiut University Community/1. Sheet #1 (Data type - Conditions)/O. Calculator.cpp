#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
	string s ;
	cin >> s ;

	int i , a=0, b=0 ;
	for( i = 0 ;i<s.size();i++){
		if(s[i]== '+' || s[i]== '*' || s[i]== '-'|| s[i]== '/'){
			break ;
		}
		a=a*10+ (s[i] - '0') ;
	}
	char ch  = s[i] ;
	for(i= i+1 ;i<s.size();i++){
		b= b*10 + (s[i] - '0') ;

	}

	switch(ch){
		case '+':
			cout << a+b << endl ;break;
		case '-':
			cout << a-b << endl ;break;
		case '*':
			cout << a*b << endl ;break ;
		case '/':
			cout << a/b << endl ;break ;
	}
}
/* 
//solution 2 :

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin>>t;

	int a=0, b=0;
	int i ;
	// part 1
	for( i=0; i<t.size(); i++)
	{
		if(t[i]=='+' or t[i]=='-' or t[i]=='*' or t[i]=='/')
			break;
		a=a*10+(t[i]-'0');	
	}
	// part 2
	char ch=t[i];

	// part 3 
	for( i=i+1; i<t.size(); i++)
	{
		b=b*10+(t[i]-'0');
	}
	if(ch == '+' ){
		cout << a+b ;
	}else if(ch == '-'){
		cout << a-b ;
	}else if(ch == '*'){
		cout << a*b ;
	}else if(ch== '/'){
		cout << a/b ;
	}
	
}


*/

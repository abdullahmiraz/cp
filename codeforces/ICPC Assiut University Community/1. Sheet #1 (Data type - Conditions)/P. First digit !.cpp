#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;

int main(){
	ll x ; ll temp ;
	cin >> x ;
	while(x != 0){
		temp = x%10 ;
		x = x/10 ;
	}
	if(temp%2==0){
		cout << "EVEN" << endl ;
	}else{
		cout << "ODD" <<endl; 
	}
}

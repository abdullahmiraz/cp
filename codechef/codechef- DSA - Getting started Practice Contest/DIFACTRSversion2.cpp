#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n;
	int cnt = 0 ;
    cin >> n ;
    for(int i = 1;i<=n ;i++){
        if(n%i==0){
			cnt+=1 ;
		}
    }
    cout << cnt << endl ;
    for(int i =1 ;i<=n ;i++){
        if(n%i==0){cout << i << " " ;}
    }

	return 0 ;
}
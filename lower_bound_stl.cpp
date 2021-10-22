// https://www.hackerrank.com/challenges/cpp-lower-bound/

#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n, q, y, s ;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x ;
        cin >> x ;
        v.push_back(x) ;
    }
    vector<int>::iterator lower ;

    cin >> q ; 
    for(int i =0;i<q;i++){
        cin >> s;
        lower = lower_bound(v.begin(), v.end(), s) ;

        if(s == *lower ){
            cout << "Yes " << lower-v.begin()+1 << "\n" ;
        }else{
            cout << "No " << lower-v.begin()+1 << "\n" ;
        }
    }
}
/*input
8
1 1 2 2 6 9 9 15

4
1
4
9
15
 */
#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    cin >> t ;
    while(t--)
    {
        int x, carl=0, chef=0, draw=0, carl_pz = 0, chef_pz=0 ;
        string win;
        cin >> x >> win ;
        for(int i=0;i<win.length();i++){
            if(win[i] == 'C'){
                carl+=2 ;
            }else if(win[i] == 'N'){
                chef+=2 ;
            }else if(win[i] == 'D'){
                carl+=1 ;
                chef+=1 ;
            }
        }
        
        // carl>chef?cout <<"carl:" <<carl : draw>chef? cout << "draw:" << draw: cout <<"chef:" << chef ;
        if(carl>chef){
            carl_pz = 60*x ;
            chef_pz = 40*x ;
        }else if(chef>carl){
            chef_pz = 60*x ;
            carl_pz = 40*x ;
        }else if(carl == chef){
            carl_pz = 55*x ;
            chef_pz = 45*x ;
        }

        cout << carl_pz << endl ;
    }
}
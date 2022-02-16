// approach 2 
#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int n;
    cin >> n ;
    int c = 1 ;

    for(int i =1 ;i<=n ;i++){
        if(i%2){ // for odd line
            cout << c << " " << c+1 << " " << c+2 << " " << c+3 << " " << c+4 << endl ;
        }else{ // for even lines 
            c+=9 ;
            cout << c << " " << c-1 << " " << c-2 << " " << c-3 << " " << c-4  << endl ;
            c++ ;

        }
    }
    
}

/*
// approach 1
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int temp = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i % 2 != 0)
            {
                cout << temp+j << " ";
            }
            else
            {
                cout << temp + 6 - j << " ";
            }
        }
        temp += 5;
        cout << endl;
    }
}
*/
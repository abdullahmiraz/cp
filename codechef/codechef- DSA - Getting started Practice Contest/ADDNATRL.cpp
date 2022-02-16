/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main()
{
    ll n, sum = 0;
    cin >> n;
    while (n) {
        sum += n;
        //cout << n  << " " ; 
        n--;
    }
    cout << sum;
}
*/
// approach 2 : gauss's formula
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main()
{
    ll n;cin >> n;cout << (n*(n+1)/2) ;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long x,y;
    long long n;
    cin >> n;

    if(n>=0)
    cout << n;
    else if(abs(n)<10)
    cout << 0;
    else{
        if(abs(n)<100){
            if(abs(n%10) > abs(n/10))
            cout << n/10;
            else
            cout << n%10;
        }
        else{
            x = abs(n%100);
        
        n/=100;
        if(x<10)
        cout << n*10;
        else if(x > x%10)
        cout << n*10 - (x%10);
        else
        cout << n*10 - x;

        }
        
    };
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long x;
    long long n;
    cin >> n;

    if(n>=0)
    cout << n;
    else if(abs(n)<=10)
    cout << 0;
    else{
        if (abs(n%100)/10 > abs(n%10)){
            x = (n/100)*10 + (n%10);
        }
        else {
            x = n/10;
        }
    cout << x;
    }
}
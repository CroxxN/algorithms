#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,k;
    cin >> n >> k;
    n = (n+1)/2;
    if(k<=n){
        cout << (2*k) -1;
    }
    else{
        
        cout << 2 * (k-n);
    }
}
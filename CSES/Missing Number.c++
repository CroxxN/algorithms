#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp, a=0;
    cin >> n;
    int store = n*(n+1)/2;
    n--;

    while (n--)
    {
        cin >> temp;
        a+=temp;
    }
    cout << store - a;
}
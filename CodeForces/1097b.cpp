
/*
User: crox-x
LANG: C++                 
Time: 1681473800
*/
#include<bits/stdc++.h>
#include<iostream>
#include <numeric>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;

    cin >> n;
   int num[n];
    for (int i=0; i<n; i++) cin >> num[i];
    int tot = num[0];
    for (int i=1; i<n; i++){
        tot ^= num[i];
    }
    int sum = 0;
    sum = accumulate(num, num+n, sum);
    if (sum == 360) cout << "YES";
    else if (tot == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
    
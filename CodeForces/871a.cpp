
/*
User: crox-x
LANG: C++                 
Time: 1683384200
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    string code = "codeforces";
    while(t--){
        int result=0;
        string s;
        cin >> s;
        for (int i=0; i<10; i++){
            if (code[i] != s[i]) result++;
        }
        cout << result << "\n"; 
    }
    return 0;
}
    

/*
User: crox-x
LANG: C++                 
Time: 1681447700
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int levenshtein(string a, string b){
    if (a.size() == 0) return b.size();
    if (b.size() ==0) return a.size();
    if (a[0] == b[0]) return levenshtein(a.substr(1, a.size()-1), b.substr(1, b.size()-1));
    return 1 + min(levenshtein());
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}
    
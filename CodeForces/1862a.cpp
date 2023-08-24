
/*
User: crox-x
LANG: C++                 
Time: 1692887700
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    string w = "vika";
    cin >> t;
    while(t--){
        int n,m;
        cin >> n>> m;
        string s[n];
        for (int i=0; i<n; i++) cin >> s[i];
        int p = 0;
        for (int i=0; i<m; i++){

           for (int j=0; j<n; j++){
               if (w[p] == s[j][i]){
                    p++;
                    if (p==4) {
                        cout << "YES\n";
                        goto label;
                    };
                    goto breaker;
                }

            }
            
            breaker:
            continue;
        }
        if (p!=4) cout << "NO\n";
        label:
        continue;
    }
    return 0;
}
    
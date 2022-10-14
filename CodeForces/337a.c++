#include<bits/stdc++.h>
using namespace std;
#define high 2e9;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n>>m;
    int ar[m];
    for(int i=0; i<m; i++)
        cin >> ar[i];
    int low = high;
    sort(ar, ar+m);
    for(int i=0; i<=m-n; i++)
        if(abs(ar[i]-ar[i+n-1])< low)
            low = abs(ar[i]-ar[i+n-1]);
    
    cout << low;
}
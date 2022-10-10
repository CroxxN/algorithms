#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, count=0, a = 0;
    cin >> n;
    long long ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];
    for(int i=1; i<n; i++){
        if(ar[i] >= ar[i-1]){

                count++;
                 a = max(a,count);
        }
            
        
        else
        count =0;
       
    }
    a++;    
    cout << a;
}
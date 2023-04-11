#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool s = false;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-1; i++){
      if (a[i] <= a[i+1]){
        s = true;
        break;
      }
    }
    if(s){
      cout << "YES" << "\n";
    }
    else 
    cout << "NO" << "\n";
  }
}
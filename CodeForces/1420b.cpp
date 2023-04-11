#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    long long p =0;
    vector<int> b(32, 0);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++){
      int z = __builtin_clz(a[i]);
      b[z]++;
    }
    for (int i=0; i<32; i++){
      p += (long long)b[i] * (b[i] - 1)/2;
    }
    cout << p << "\n";
  }
  return 0;
}
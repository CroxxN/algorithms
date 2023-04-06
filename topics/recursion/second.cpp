#include<bits/stdc++.h>

using namespace std;

void pattern (int n){
  for(int i=1; i<=n; i++){
    cout << i << " ";
  }
  cout << "\n";
  if (n==1) return;
  pattern(n-1);
  for(int i=1; i<=n; i++){
    cout << i << " ";
  }
  cout << "\n";
}

int main(){
  int n=10;
  pattern(10);
}
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, g=1;
  cin >> n;
  int mag[n];
  for (int i=0; i<n; i++)
    cin >> mag[i];
  
  for (int i=1; i<n; i++){
    if (mag[i]!=mag[i-1])
    g++;
  }
  cout << g;
}
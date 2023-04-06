#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, h, tot=0;
  cin >> n >> h;
  int pep[n];
  for (int i=0; i<n; i++){
    cin >> pep[i];
  }
  for (int i=0; i<n; i++){
    if (pep[i]>h) tot+=2;
    else tot++;
  }
  cout << tot;
}
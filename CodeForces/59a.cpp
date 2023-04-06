#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int low =0, high = 0;
  cin >> s;
  for(auto x: s)
  if (x>96)
  low++;
  else 
  high++;
  if (low >= high){
    for (int i=0; i<s.length(); i++){
      if (s[i]<96)
      s[i]+=32;
    }
  }
  else {
    for (int i=0; i<s.length(); i++){
      if (s[i]>96)
      s[i]-=32;
    }
  }
  cout << s;
  return 0;
}
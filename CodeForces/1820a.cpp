
/*
User: crox-x
LANG: C++
Time: 1681551200
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 1; i < s.size(); i++) {
      if (s[i - 1] == '_' && s[i] == '_')
        count++;
    }
    if (s[s.size() - 1] == '_')
       count++;
    if (s.size() == 1)
        count++;
    else if (s.size()==1 || s[0] == '_') count++;
      cout << count << "\n";
    
  }
  return 0;
}

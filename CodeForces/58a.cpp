#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int j = 0;
  string res = "hello";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == res[j]) {
      j++;
    }
    if (j > 4) {
      cout << "YES";
      return 0;
    };
  }
  cout << "NO";
  return 0;
}
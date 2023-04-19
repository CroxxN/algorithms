#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  vector<int> res;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.') {
      res.push_back(0);
    } else if (s[i] == '-' && s[i + 1] == '.') {

      res.push_back(1);
      i++;
    } else if (s[i] == '-' && s[i + 1] == '-') {
      res.push_back(2);
      i++;
    }
  }
  for (auto x : res)
    cout << x;
  cout << "\n";
  return 0;
}
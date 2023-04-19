#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  while (t--) {
    for (int i = 0; i < n; i++) {
      if (s[i] < s[i + 1]) {
        swap(s[i], s[i + 1]);
        i++;
      }
    }
  }
  cout << s << "\n";
  return 0;
}
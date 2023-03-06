#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  string first = " qwertyuiop asdfghjkl;  zxcvbnm,./ ";
  char direc;
  string input;
  string output;
  cin >> direc >> input;
  int idx;
  if (direc == 'R')
    idx = -1;
  else
    idx = 1;

  for (char x : input) {
    for (int i = 1; i < first.length() - 1; i++) {
      if (x == first[i] && x != ' ') {
        output += first[i + idx];
      }
    }
  }
  cout << output;
}

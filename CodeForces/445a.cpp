
/*
User: crox-x
LANG: C++
Time: 1681483800
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  int ar[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> ar[i][j];
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (ar[i][j] == '-')
        continue;
      else if (i == 0) {
        ar[i][j] = ar[i][j - 1] == 'B' ? 'W' : 'B';
      } else if (j == 0) {
        ar[i][j] = ar[i - 1][j] == 'B' ? 'W' : 'B';
      } else {
        if (ar[i - 1][j] == 'B')
          ar[i][j] = 'W';
        else
          ar[i][j] = ar[i - 1][j] == 'B' ? 'W' : 'B';
        ar[i][j] = ar[i][j - 1] == 'B' ? 'W' : 'B';
      }
    }
  }
  for (int i = 0; i < n; i++) {

    for (int j = 0; j < m; j++)
      cout << ar[i][j];
    cout << "\n";
  }
  return 0;
}

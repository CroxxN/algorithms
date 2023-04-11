#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n, q;
    cin >> n >> q;
    int mat[n][n];
    int oneeight[n][n];
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        cin >> mat[i][j];

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        oneeight[n - i -1][n - j -1] = mat[i][j];

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) {

        if (q < 0) {
          cout << "NO" << "\n";
          goto jump;
        }
        if (mat[i][j] != oneeight[i][j])
          q--;
      }
    cout << "YES" << "\n";
    jump: continue;
  }
  return 0;
}
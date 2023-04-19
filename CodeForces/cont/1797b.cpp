#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q, k = 0;
    cin >> n >> q;
    int mat[n][n];
    int oneeight[n][n];
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        cin >> mat[i][j];

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        oneeight[n - i - 1][n - j - 1] = mat[i][j];

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) {

        if (mat[i][j] != oneeight[i][j])
          k++;
      }

    if (k < q)
      cout << "YES"
           << "\n";
    else if (n%2==0 && (k - q) %2==0)
      cout << "NO"
           << "\n";
    else if (n%2!=0)
      cout << "YES"
           << "\n";
  }
  return 0;
}
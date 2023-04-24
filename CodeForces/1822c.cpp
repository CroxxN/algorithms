#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int t;
  cin >> t;
  while (t--) {

    cin >> n;
    long long result = (long long)(n - 2) * (n - 1) + (long long)5*n;
    cout << result << "\n";
  }
  return 0;
}
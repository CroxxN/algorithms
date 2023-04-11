#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, d, i = 10;
    cin >> n >> d;
    while (n != 0) {
      int rem = n % 10;
      i *= 10;
      n /= 10;
    }
  }
  return 0;
}
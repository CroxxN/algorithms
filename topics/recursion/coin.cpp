#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>

using namespace std;

// #define min(x, y, z) if (x>y) x>z? z: x\\
//                      else if (y>z) y\\
//                      else x

// int solve(int n) {
//   if (n == 0)
//     return 0;
//   if (n < 0)
//     return INFINITY;
//   int best = INT32_MAX;
//   for (int i = 1; i <= 5; i += 2) {

//     best = min(best, solve(n - i) + 1);
//   }
//   return best;
// }

int solve(int x) {
  if (x < 0)
    return 0;
  if (x == 0)
    return 0;
  int best = INFINITY;
  for (int i=0; i<=5; i+=2) {
    best = min(best, solve(x - i) + 1);
  }
  return best;
}

int main() {
  int n = 10;

  cout << solve(n);
  return 0;
}
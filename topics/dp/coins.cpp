#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>
#include <cstring>
using namespace std;

int main() {
  int n = 4;
  int num[3] = {1,2,4};
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (auto x : num) {
      if (i-x >= 0){
        
      dp[i] += (dp[i-x];
      }
    }
  }
  cout << dp[n];
  return 0;
}
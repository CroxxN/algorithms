#include <bits/stdc++.h>
using namespace std;
void recurse(int);

int main() {
  int num, t;
  cin >> t;
  while(t--){
    
  cin >> num;
  recurse(num);
  }
  return 0;
}

void recurse(int n) {

  if (n<2020){
    cout << "no\n";
    return;
  }
  // if (n < 20210) {
    if ((n % 2020 == 0) || (n % 2021 == 0)) {
      cout << "yes\n";
      return;
    } else {
      n -= ((n%100)/10)/2==0? 2020: 2021;
      recurse(n);
    }
  // }
}
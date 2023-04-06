#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, an = 0, da = 0;
  cin >> n;
  string game;
  cin >> game;
  for (auto x : game) {
    if (x == 'A') 
      an++;
     else 
      da++;
    
  }
  if (an > da)
    cout << "Anton";
  else if (da > an)
    cout << "Danik";
  else
    cout << "Friendship";
}
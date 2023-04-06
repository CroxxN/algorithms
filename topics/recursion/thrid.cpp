#include<bits/stdc++.h>
using namespace std;

void hanoi(int n, char from, char to, char aux ){
  if (n<1) return;
  hanoi(n-1, from, aux, to);
  cout << "Move disk " << n << " from rod " << from << " to " << to << "\n";
  hanoi(n-1, aux, to, from);
}

int main(){
  hanoi(3, 'A', 'B', 'C');
  return 0;
}

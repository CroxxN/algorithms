#include<bits/stdc++.h>

using namespace std;

int factorial(int a){
  if (a==1){
    return 1;
  }
  return a*factorial(a-1);
}

int main(){
  int a = 10;
  cout << factorial(10);
}
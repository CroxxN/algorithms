
/*
ID: saradga1
TASK: gift1
LANG: C++
*/
#include <bits/stdc++.h>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  ofstream fout("gift1.out");
  ifstream fin("gift1.in");
  unordered_map<string, int> map;
  int np, amount, giver;
  fin >> np;
  string name;
  vector<string> names;
  for (int i = 0; i < np; i++) {
    fin >> name;
    map[name] = 0;
    names.push_back(name);
  }
  while (!fin.eof()) {
    fin >> name;
    fin >> amount >> giver;
    if (giver != 0) {

      int am = amount % giver;
      map[name] -= (amount - am);
      for (int i = 1; i <= giver; i++) {
        fin >> name;
        map[name] += (amount - am) / giver;
      }
    }
  }
  for (string x : names) {
    fout << x << " " << map[x] << "\n";
  }
  return 0;
}

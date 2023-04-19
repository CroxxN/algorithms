
/*
ID: saradga1
TASK: friday
LANG: C++
*/
#include <bits/stdc++.h>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

inline int more(int d) { return d + 3 < 7 ? d + 3 : (d + 3) % 7; }
inline int four(int d) { return d + 2 < 7 ? d + 2 : (d + 2) % 7; }

int main() {
  ifstream fin("friday.in");
  ofstream fout("friday.out");
  int n;
  fin >> n;
  n = 1900 + n;
  int week[7];
  memset(week, 0, 7 * sizeof(int));
  int curr_day = 2;
  int day = 1;

  for (int i = 1900; i < n; i++) {
    if (day < 13) {
      curr_day = (13 + curr_day - day) % 7;
      week[curr_day]++;
      day = 13;
    } else {

      curr_day = more(curr_day);
      week[curr_day]++;
    }
    curr_day = more(curr_day);
    week[curr_day]++;
    if ((i % 100 == 0 && i % 400 == 0) || (i % 100 != 0 && i % 4 == 0)) {

      curr_day = curr_day + 1 < 7 ? curr_day + 1 : (curr_day + 1) % 7;
      week[curr_day]++;
    } else {

      week[curr_day]++;
    }

    curr_day = more(curr_day);
    week[curr_day]++;
    curr_day = four(curr_day);
    week[curr_day]++;
    curr_day = more(curr_day);
    week[curr_day]++;
    curr_day = four(curr_day);
    week[curr_day]++;
    curr_day = more(curr_day);
    week[curr_day]++;
    curr_day = more(curr_day);
    week[curr_day]++;
    curr_day = four(curr_day);
    week[curr_day]++;
    curr_day = more(curr_day);
    week[curr_day]++;
    curr_day = four(curr_day);
    week[curr_day]++;
  }
  for (int i = 0; i < 6; i++)
    fout << week[i] << " ";
  fout << week[6] << "\n";

  return 0;
}

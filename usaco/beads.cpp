
/*
ID: saradga1
TASK: beads
LANG: C++                 
*/
#include<bits/stdc++.h>
#include <cstring>
#include <fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream fin ("beads.in");
    ofstream fout("beads.out");
    string s;
    fin >> s;
    s = strcat(s, s);
    int n = (s.size()-1) * 2;
    int curr_max = 0;
    int tot_max = 0;
    int temp = 0;
    for (int i=1; i<n; i++){
        if (s[i] == s[i-1] || s[i] == 'w'){
            curr_max++;
            temp++;
        }
        else {
            // temp = 0;
            tot_max = max(tot_max, curr_max);
            curr_max-= temp;
            temp = 0;
        }
    }
    return 0;
}
    
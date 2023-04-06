
/*
ID: saradga1
TASK: ride
LANG: C++                 
*/
#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ofstream fout ("ride.out");
    ifstream fin("ride.in");
    string prim, sec;
    int prim_tot = 1, sec_tot = 1;
    fin >> prim >> sec;
    for (char x: prim){
        int temp = x-64;
        prim_tot*= temp;
    };
    for (char y: sec){
        int temp = y-64;
        sec_tot*=temp;
    };
    if ((prim_tot%47) == (sec_tot%47)){
        
    fout << "GO" << "\n";
    }
    else{
        
     fout << "STAY" << "\n";
    }
    return 0;
}
    
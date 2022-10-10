#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string sr;
    bool flag = false;
    cin >> sr;
    string our = "HQ9";

    for(int i=0; i<sr.length(); i++)
    for(char y: our)
    {
        if(sr[i]==y){
        
        flag = true;
        break;
        }

    }
    
    if(flag)
    cout << "YES";
    else
    cout << "NO";
    
}
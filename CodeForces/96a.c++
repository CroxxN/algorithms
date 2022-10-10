#include<bits/stdc++.h>
using namespace std;

int main(){
    string ar;
    cin >> ar;
    if(ar.length() <7){
        cout << "NO";
        exit(0);
    }
 
    int count =1;
    bool found = false;
    for(int i=0; i<ar.length()-1; i++){
        if(ar[i] == ar[i+1]){
            count++;
        }
        
        else
        count =1;
        if(count>6){
            found = true;
            break;
        }

    }
    if(found)
    cout << "YES";
    else
    cout << "NO";
}
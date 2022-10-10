#include<bits/stdc++.h>
using namespace std;

int main(){
    string sr, newst="";
    bool flag = false;
    cin >> sr;
    for(int i=0; i<sr.length(); i++){
        if(sr[i]=='W' && sr[i+1]=='U' && sr[i+2]=='B'){
            if(flag){
                newst+=' ';
                
            }
            i+=2;
        }
        else{
            flag=true;
            newst+=sr[i];
        }
    }
    cout << newst;
}
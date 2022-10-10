#include<iostream>
using namespace std; 


int main(){
    int t, total=0;
    int x,y,z;
    cin >> t;
    for(int i=0; i<t; i++){
         
        cin >> x >> y>> z;
    if( x+y+z >=2)
    total++;

    }
    cout << total << "\n";
}
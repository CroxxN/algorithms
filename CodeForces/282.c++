#include<iostream>
using namespace std;


int main(){
    int x=0, t;
    cin >> t;
    char arr[5];
    for(int i=0; i<t; i++){
        cin >> arr; 
        if(arr[1] == '+')
        x++;
        else
        x--;
    }
    cout << x;
}
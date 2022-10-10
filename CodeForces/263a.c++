#include<iostream>
using namespace std;


int main(){
    int lowest;
    int mat[10][10];
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                lowest = i>=3? i-3: 3-i;
                lowest += j>=3? j-3: 3-j;
            }
        }
    }
    cout << lowest;
}
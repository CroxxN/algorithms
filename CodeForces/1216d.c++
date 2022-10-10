#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int arr[n];
    long long max=-1;
    int total =0;
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
        total+=arr[i];
        if(arr[i]> max)
        max = arr[i];
    }

    long long result = n*max - total;
       long long z=result, y=1;
    for(int i=2; i<n; i++){
        if(result%i ==0){
            z =i;
            y = result / i;
            break;
        }
    }

    cout << y << " " << z;
}
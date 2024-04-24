#include<bits/stdc++.h>
using namespace std;

void zoom(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   int arr[5] = {1, 2, 3,  4, 5};
   int a=0, b=4;
   zoom(arr, a, b);
    return 0;
}
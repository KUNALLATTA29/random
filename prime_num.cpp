#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int k=true;
    if(n==0 || n==1){
        k=false;
    }
    
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            k=false;
            break;
        }
    }
    
    if(k){
        cout<<"this is prime number.";
    }else{
        cout<<"this is not a prime number.";
    }
    return 0;
}
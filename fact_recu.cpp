
#include <bits/stdc++.h>
using namespace std;

int fact(int a){
    if(a==0){
        return 1;
    }
    
    return a*fact(a-1);
}
int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    
    int ans = fact(a);
    
    cout<<ans;
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int power(int x, int n){
    if(n==0){
        return 1;
    }
    
    if(n%2==0){
        return power(x*x, n/2);
    }else{
        return x * power(x*x, (n-1)/2);
    }
}

int main()
{
    int x,n;
    cout<<"enter base: ";
    cin>>x;
    
    cout<<"enter power: ";
    cin>>n;
    
    int ans= power(x,n);
    cout<<ans;

    return 0;
}
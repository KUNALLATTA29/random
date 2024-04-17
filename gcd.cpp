
#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y){
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}

int main()
{
    int x,y;
    cout<<"enter base: ";
    cin>>x;
    
    cout<<"enter power: ";
    cin>>y;
    
    int ans= gcd(x,y);
    cout<<ans;

    return 0;
}
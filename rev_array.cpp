#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    
    
    int mid=(0+n)/2;
    reverse(arr.begin(), arr.begin()+2);
    reverse(arr.begin()+3, arr.begin()+5);
    
    reverse(arr.begin(),arr.begin()+5);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}
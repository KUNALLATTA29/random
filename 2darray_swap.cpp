#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>swapnum(vector<vector<int>>&arr,int r1_r3, int r2_r4, int c1_c4, int c2_c3){
    
    //swap(arr[r1_r3][c1_c4],arr[r2_r4][c2_c3]);
    //swap(arr[r1_r3][c2_c3], arr[r2_r4][c1_c4]);
    int temp1 = arr[r1_r3][c1_c4];
    arr[r1_r3][c1_c4]=arr[r2_r4][c2_c3];
    arr[r2_r4][c2_c3]=temp1;
    int temp2 = arr[r1_r3][c2_c3];
    arr[r1_r3][c2_c3] = arr[r2_r4][c1_c4];
    arr[r2_r4][c1_c4] = temp2;
    
    return arr;
}


int main(){
    
    vector<vector<int>>arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    
    int r1_r3 = 0,r2_r4 = 3, c1_c4 = 0, c2_c3 = 2;
    
    vector<vector<int>>ans = swapnum(arr,r1_r3, r2_r4, c1_c4, c2_c3);
    
     for(auto row:ans)
    {
        for(auto col: row)
        {
            cout<<col<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
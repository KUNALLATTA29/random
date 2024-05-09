#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=2;
    double b=2.2;
    int *ptr = &a;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;
    
    double *ptr0=&b;
    double **ptr01=&ptr0;
    double ***ptr02=&ptr01;
    
    cout<<***ptr02 + ***ptr2;
    
    return 0;
}
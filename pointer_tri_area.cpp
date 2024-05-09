#include<bits/stdc++.h>
using namespace std;

int main(){
    int base=4;
    int height=6;
    
    int *ptr=&base;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;
    
    int *ptr0=&height;
    int **ptr01=&ptr0;
    int ***ptr02=&ptr01;
    
    double  c=0.5 * (***ptr2) * (***ptr02);
    double *ptr00=&c;
    double **ptr001=&ptr00;
    double ***ptr002=&ptr001;
    
    cout<<***ptr002;
    
    
    return 0;
}
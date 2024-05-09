#include<bits/stdc++.h>
using namespace std;

int main(){
    double pi=3.14;
    double radi=4.2;
    
    double *ptr=&pi;
    double **ptr1=&ptr;
    double ***ptr2=&ptr1;
    
    double *ptr0=&radi;
    double **ptr01=&ptr0;
    double ***ptr02=&ptr01;
    
    double area = (***ptr2)* ((***ptr02)*(***ptr02));
    double *ptr00=&area;
    double **ptr001=&ptr00;
    double ***ptr002=&ptr001;
    
    cout<<***ptr002<<endl;
    
    
    
    
    return 0;
}
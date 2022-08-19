#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *p = &a;
    int *q = &b;
    int minEle = min(*p,*q);
    cout<<"The minimum of the two entered elements are:"<<minEle; 
    return 0;
}
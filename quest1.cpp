#include<iostream>
using namespace std;
bool swapValues(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping \n";
    cout<<"a : "<<a<<" b : "<<b<<"\n";
    cout<<"After swapping \n";
    if(swapValues(&a,&b)){
        cout<<"a : "<<a<<" b : "<<b; 
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    char arr[] = "Arnab Deb";
    int length = 0;
    for(;arr[length]!='\0';length++);
    for(int i=0;i<length/2;i++){
        int temp = arr[i];
        arr[i] = arr[length-1-i];
        arr[length-1-i] = temp;
    }
    char *p = arr;
    cout<<"The string in reverse order is:";
    for(int j=0;j<length;j++){
        cout<<*(p++)<<" ";
    }
    return 0;
}

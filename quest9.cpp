#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    int *p = arr;
    cout<<"The array in reverse order is:";
    for(int j=0;j<n;j++){
        cout<<*(p++)<<" ";
    }
    return 0;
}
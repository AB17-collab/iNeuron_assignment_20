#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    int *p = arr;
    for(int i=0;i<n;i++){
        sum += *(p++);
    }
    cout<<"The sum of the elements of the array:"<<sum; 
    return 0;
}
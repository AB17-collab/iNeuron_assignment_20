#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i] = arr[left+i];
    }
    for(int j=0;j<n2;j++){
        b[j] = arr[mid+1+j];
    }

    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(a[i]<b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }
    while(i<n1){
        arr[k++] = a[i++];
    }
    while(j<n2){
        arr[k++] = b[j++];
    }
}
void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid = (left+right)>>1;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the values in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
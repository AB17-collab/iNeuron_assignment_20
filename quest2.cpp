#include<iostream>
#include<cstring>
using namespace std;
bool swapValues(string &x,string &y){
    x.swap(y);
    return true;
}
int main(){
    string a,b;
    getline(cin>>ws,a);
    getline(cin>>ws,b);
    cout<<"Before swapping \n";
    cout<<"a : "<<a<<" b : "<<b<<"\n";
    cout<<"After swapping \n";
    if(swapValues(a,b)){
        cout<<"a : "<<a<<" b : "<<b; 
    }
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char k[] = "Arnab Deb";
    char *j = k;
    char *p = j;
    for(int i=0;k[i];i++){
        j++;
    }
    cout<<"The length of the string is:"<<j-p;
    return 0;
}
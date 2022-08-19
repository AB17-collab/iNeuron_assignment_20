#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<char, bool> ump;
    for(char i=65;i<=90;i++){
        if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'){
            ump[i] = true;
            ump[i+32] = true;
        }
        else{
            ump[i] = false;
            ump[i+32] = false;
        }
    }
    for(char i=97;i<=122;i++){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            ump[i] = true;
            ump[i-32] = true;
        }
        else{
            ump[i] = false;
            ump[i-32] = false;
        }
    }
    char k[] = "Arnab Deb";
    char *j = k;
    char *p = j;
    int countVowels = 0;
    int countConsonants = 0;
    while(*(j)!='\0'){
        if(ump[*(j)]){
            countVowels++;
            ump[*(j)] = false;
            if(*(j)>='a' && *(j)<='z'){
                if(ump.find(*(j)-32)!=ump.end())
                    ump[*(j)-32] = false;
            }
            else if(*(j)>='A' && *(j)<='Z'){
                if(ump.find(*(j)+32)!=ump.end())
                    ump[*(j)+32] = false;
            }
        }
        else if(!ump[*(j)] && (*(j)!='a'&&*(j)!='e'&&*(j)!='i'&&*(j)!='o'&&*(j)!='u'&&*(j)!='A'&&*(j)!='E'&&*(j)!='I'&&*(j)!='O'&&*(j)!='U'&&*(j)!=' ')){
            cout<<*(j)<<"\n";
            countConsonants++;
        }
        j++;
    }
    cout<<"The number of vowels and consonants are:"<<countVowels<<" "<<countConsonants;
    return 0;
}
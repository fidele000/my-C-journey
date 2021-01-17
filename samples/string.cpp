#include<iostream>
#include<string.h>
using namespace std;

char* Copyof(const char *str){
    char *copy=new char[strlen(str)+1];
    strcpy(copy,str);
    return copy;
}

void copyThis(char *well){
    char *des;
    while(*des++=*well++);
    cout<<*des;
}
int main(){
    copyThis("Hello");
}
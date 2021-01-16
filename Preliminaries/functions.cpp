#include<iostream>
#include<stdarg.h>
#include<stdlib.h>
using namespace std;

int count_(char* p,char x){
    /**
     * Count the how many times character are in
     * this array char @name
    **/
    int count=0;
    if(p==nullptr) return 0;
    for(;*p!=0;++p){
        if(*p==x){
            ++count;
        }
    }
    return count;
}


int Menu(char *option1 ...){
    int num;
    char* option=option1;
    va_list args;
    va_start(args,option1);
    int count=0;
    do{
        cout<<++count<<"."<<option<<endl;
    }while((option=va_arg(args,char*))!=0);

    va_end(args);
    cout<<"Chose One Here";
    cin>>num;
    return num;
}


char arr[]={'1','2'};
int well=count_(arr,'3');
#include<iostream>
#include<stdarg.h>
#include<stdlib.h>
using namespace std;

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
int main(int argc,const char *args[]){
    char* arrr[]={"Kirezi","Cyisa"};
    int n=Menu(
        "Fidele",
        "Kirezi",
        "Cyisa",
        "Fidele",
        0
    );
    cout<<endl<<"Output "<<n<<endl;
}
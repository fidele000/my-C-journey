#include<iostream>
#include<stdarg.h>
using namespace std;
int Menu(char *option1 ...){
    va_list args;
    char* option=option1;
    int count=0,choice=0;

    va_start(args,option1);

    do{
        cout<<++count<<". "<<option<<endl;
    }while((option=va_arg(args,char*))!=0);
    va_end(args);

    cout<<"Make A choice first";
    cin>>choice;

    return (choice>0 && choice <= count)?choice:0;
}
int main(){
     int n=Menu(
         "Fidele",
         "Kirezi",
         "Birakaze",
         0
     );
     cout<<n;
}
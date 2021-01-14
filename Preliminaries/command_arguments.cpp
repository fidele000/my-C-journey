#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc,const char *argv[]){

    int sum=0;
    for (int i = 0; i < argc; i++)
    {
        sum+=atof(argv[i]);
    }
    cout<<"The numb of numbers is "<<sum;
    
}
#include<iostream>
using namespace std;

int count_(char* p,char x){

    int count=0;
    if(p==nullptr) return 0;
    for(;*p!=0;++p){
        if(*p==x){
            ++count;
        }
    }
    return count;
}


int main(){
    char ar[6]; // declaration of array character type
    char* p; //declaration of pointer of a character

    char arr[]={'1','3','3'};
    //double* a=nullptr;

    int a=count_(arr,'4');
    cout<<a;
}
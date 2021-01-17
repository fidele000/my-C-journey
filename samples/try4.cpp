#include<iostream>
using namespace std;

inline int Abs(int n){
    return n>0?n:-n;
}

int Factorial(int n){
    return n==0?1:n*Factorial(n-1);
}
void Error(char *message,int well=0);
int main(){
    cout<<"Factorial of 5 is "<<Factorial(5);
}
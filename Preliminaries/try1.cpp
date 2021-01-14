#include<iostream>
using namespace std;

int just=300;

int power(int base,unsigned int last){
    /**
     * Function @name
     * Power
     * Well
    **/
    int result=1;
    for(int i=1;i<=last;++i)
        result*=base;

    return result;
}
int main(void){
    int just=33;
    cout<<::just<<endl;
    cout<<"Well Well "<<power(3,2);
}
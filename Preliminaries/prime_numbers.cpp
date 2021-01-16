#include <iostream>
using namespace std;


void Prime(unsigned int num){
    for (int i = 2; i <= num; i++)
    {
        int c=1;
        int count=1;
        while (c<=9)
        {
            if (i%c==0)
            {
                count++;
            }
            c++;
        }
        if(count==2){
            cout<<i<<"\t";
        }
    }
    
}
int main(){
    Prime(100);
}
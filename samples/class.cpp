#include<iostream>
using namespace std;



class Vector{
    public:
        Vector(int s) :elem{ new double[s] }, sz{s}{}
        double& operator[](int i){ return elem[i]; }
        int size(){ return sz; }

    private:
        double* elem;
        int sz;
};


int main(){
    Vector v(6);
    cout<<"Enter Numbers to be added\n";
    for(int i=0;i<v.size();++i){
        cin>>v[i];
    }
    int sum=0;
    for(int s=0;s<v.size();++s){
        sum+=v[s];
    }
    cout<<"The sum is "<<sum;
}
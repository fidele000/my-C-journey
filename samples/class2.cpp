#include<iostream>
using namespace std;

class Vector{

    public:
        Vector(int s);
        double& operator[](int i);
        int size();
        
    private:
        double* elem;
        int sz;

}


Vector::Vector(int s) 
    :elem{new double[s]},sz{s}{}

double& Vector::operator[](int i){
    return elem[i];
}

int Vector::size(){
    return sz;
}


int main(){
    Vector v(5);

    cout<<"Enter Inputs"<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cin>>v[i];
    }

    int sum=0;
    for (int i = 0; i < v.size(); ++i)
    {
        sum+=v[i];
    }
    
    cout<<"The Sum is "<<sum;
    
}
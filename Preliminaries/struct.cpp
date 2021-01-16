#include<iostream>
using namespace std;

struct Vector{
    int sz;
    double* elem;
};

void f(Vector v, Vector& rv/*, Vector∗ pv*/)
{
    int i1 = v.sz; // access through name
    int i2 = rv.sz; // access through reference
    //int i4 = pv−>we; // access through pointer
}

void vector_init(Vector& v,int w){
    v.elem=new double[w];
    v.sz=w;
}
int main(){
    int s;
    cout<<"Enter The size you want\t";
    cin>>s;
    Vector v;
    vector_init(v,s);
    for(int i=0;i!=s;++i){
        cin>>v.elem[i];
    }

    int sum=0;
    for(int i=0;i!=s;++i){
        sum+=v.elem[i];
    }

    cout<<"he sum of Vectors are "<<sum;
}
#include<iostream>
using namespace std;

const int maxCard=100;


class Pointer{
    /**
     * Pointer Class
    */
    int xVal,yVal;

    public:
        void SetPt(int x, int y) { xVal=x; yVal=y; }
        void OffsetPt(int x, int y) { xVal+=x; yVal+=y; }
};

class Set{
    public:
        void Emptyset(void){ card=0; }
        bool Member (const int);
        bool Number(const int);
        void AddElem(const int);
        void RmvElem(const int);
        void Copy(Set&);
        bool Equal(Set&);
        void Intersect (Set&, Set&);
        void Union (Set&, Set&);
        void Print (void);

    private:
        int elem[maxCard];
        int card;
};

bool Set::Member(const int num){
    for(register int i=0; i< card;++i){
        if(elem[i]=num){
            return true;
        }
    }
    return false;
}

void Set::AddElem(const int num){
    if(Member(num)){
        return;
    }
    if(card<maxCard){
        elem[card++]=num;
    }
    else{
        cout<<"Set Overflow\n";
    }
}

void Set::RmvElem(const int num){

    for(register int i=0;i<card;++i){
        if(elem[i]==num){
            for(;i<card-1;++i){
                elem[i]=elem[i+1];
            }
            --card;
        }
    }
}

bool Set::Equal(Set &set){
    if(card!=set.card)
        return false;
    
    for(register int i=0;i<card;++i)
        if(!set.Member(elem[i]))
            return false;
    
    return false;
}

void Set::Intersect(Set &set,Set &res){
    res.card=0;
    for(register int i=0;i<card;++i)
        if(res.Member(elem[i]))
            res.elem[res.card++]=elem[i];
}

void Set::Union(Set &set,Set &res){
    
    set.Copy(res);
    for(register int i=0;i<card;++i)
        res.AddElem(elem[i]);
}

void Set::Print(void){
    cout<<"{";
    for(register int i=0;i<card;++i){
        cout<<elem[i]<<",";
        if(card>0) 
            cout<<elem[i];
        cout<<",";
    }
    cout<<"}"<<endl;
}

int main(){
    Pointer pt;
    pt.SetPt(10,20);
    pt.OffsetPt(3,4);
}
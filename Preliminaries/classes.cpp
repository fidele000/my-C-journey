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
        void EmptySet(void){ card=0; }
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

void Set::Copy (Set &set)
{
    for (register int i = 0; i < card; ++i)
        set.elem[i] = elem[i];
    set.card = card;
}
int main(){
    
    Set s1, s2, s3;
    s1.EmptySet(); s2.EmptySet(); s3.EmptySet();
    s1.AddElem(10); s1.AddElem(20); s1.AddElem(30); s1.AddElem(40);
    s2.AddElem(30); s2.AddElem(50); s2.AddElem(10); s2.AddElem(60);
    cout << "s1 = ";s1.Print();
    cout << "s2 = ";s2.Print();
    s2.RmvElem(50); cout << "s2 - {50} = ";
    if (s1.Member(20)) cout << "20 is in s1\n";
    
    s1.Intersect(s2,s3); cout << "s1 intsec s2 = "; s3.Print();
    s1.Union(s2,s3); cout << "s1 union s2 = "; s3.Print();
    if (!s1.Equal(s2)) cout << "s1 /= s2\n";
    return 0;

}
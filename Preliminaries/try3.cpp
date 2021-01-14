#include<iostream>
using namespace std;
enum Direction{
    /**
     * Hello @name
     * Karabaye
    **/
    nothing,
    north,
    sourth,
    east,
    west,
};

int main(void){
    //const char *well="Welcome man";
    //well="y";
    Direction s;
    Direction d;

    switch (d)
    {
        case sourth:
            cout<<"Sourth";
            break;
        case east:
            cout<<"East";
            break;
        case west:
            cout<<"West";
            break;
        case north:
            cout<<"North";
            break;
        case nothing:
            cout<<"Nothing";
        default:
            break;
    }
}
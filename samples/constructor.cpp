#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int xVal,yVal;
    public:
        Point(int x,int y){ xVal=x; yVal=y; }
        Point(void){ xVal = yVal =0; }
        void OffSetPt(int,int);
};



void Point::OffSetPt(int x,int y){
    xVal+=x;
    yVal+=y;
}


int main(){
    Point pt1(10,20); // cartesian coordinates
    Point pt3; // origin
}
#include<iostream>
using namespace std;
enum class Color{
    red,
    green,
    yellow
};

Color& operator++(Color& t){
    switch (t)
    {
    case Color::red: return t=Color::green;
    case Color::green: return t=Color::yellow;
    case Color::yellow: return t=Color::red;
    
    } 
}


int main(){
    Color color=Color::red;
    Color next=++color;
}
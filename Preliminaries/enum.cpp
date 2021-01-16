#include<iostream>
using namespace std;
enum class Color{
    red,
    green,
    yellow
};



int main(){
    Color color=Color::red;
    cout<<color;
}
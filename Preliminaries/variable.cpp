#include <iostream>
int main (void){
    int workDays;
    float workHours, payRate, weeklyPay;
    workDays = 5;
    workHours = 7.5;
    payRate = 38.55;
    weeklyPay = workDays  * workHours * payRate;
    std::cout << "Weekly Pay = ";
    std::cout << weeklyPay;
}
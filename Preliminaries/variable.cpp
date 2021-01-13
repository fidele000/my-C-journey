#include <iostream>
int main (void){
    int workDays;
    float workHours, payRate, weeklyPay;
    workDays = 5;
    workHours = 7.5;
    
    std::cout << "What is the hourly pay rate? ";
    std::cin >> payRate;

    weeklyPay = workDays  * workHours * payRate;
    std::cout << "Weekly Pay = ";
    std::cout << weeklyPay;
}
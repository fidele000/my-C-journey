#include <iostream>
int main (void){
    int workDays=5;
    float workHours, payRate, weeklyPay;
    std::cout << "What are the work hours and the hourly pay rate? ";
    std::cin >> workHours >> payRate;
    weeklyPay = workDays * workHours * payRate;
    std::cout << "Weekly Pay = " << weeklyPay << '\n';
}
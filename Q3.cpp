/* 3. Write a C++ program to calculate the sum of two numbers.*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{   system("cls");
    double Num1,Num2;
    cout<<"Enter two numbers:->";
    cin>>Num1>>Num2;
    double Sum=Num1+Num2;
    cout<<"Sum of given two numbers = "<<Sum;
    getch();
    return(0);
}
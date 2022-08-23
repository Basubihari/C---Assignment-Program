/* 6. Write a C++ program to calculate an average of 3 numbers. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    double Num1,Num2,Num3;
    cout<<"Enter three numbers :-> ";
    cin>>Num1>>Num2>>Num3;
    double Avg= (Num1+Num2+Num3)/3;
    cout<<"Average of given three numbers ="<<Avg;
    getch();
    return(0);
}

/* 9. Write a C++ program to find the maximum of two numbers. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    double Num1,Num2;
    cout<<"Enter two numbers:->";
    cin>>Num1>>Num2;
    if(Num1>Num2)
    cout<<"Maximum of given two numbers="<<Num1;
    else
    cout<<"Maximum of given two numbers="<<Num2;
    getch();
    return(0);
}
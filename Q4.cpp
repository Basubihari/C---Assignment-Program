/* 4. Write a C++ program to calculate the area of a circle. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    double r;
    cout<<"Enter Radius of Circle:-> ";
    cin>>r;
    double ar=((22/7)*r*r);
    cout<<"Area of Circle = "<<ar;
    getch();
    return(0);
}
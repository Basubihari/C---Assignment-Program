/* 5. Write a C++ program to calculate the volume of a cuboid. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    double l, b, h;
    cout<<"Enter Length,Width and Height of Cuboid:->";
    cin>>l>>b>>h;
    double V= l*b*h;
    cout<<"Volume of Cuboid = "<<V;
    getch();
    return(0);
}

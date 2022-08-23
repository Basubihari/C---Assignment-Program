/* 7. Write a C++ program to calculate the square of a number. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    system("cls");
    double Num1;
    cout<<"Enter a Number:->";
    cin>>Num1;
    cout<<"Square of given number = "<<pow(Num1,2);
    getch();
    return(0);
}

/* 10. Write a C++ program to add all the numbers of an array of size 10. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    double Num[10];
    cout<<"Enter 10 numbers:->";
    double Tot=0;
    for(int i=0;i<10;i++)
    {
        cin>>Num[i];
        Tot+=Num[i];
    }
    cout<<"Addition of given 10 numbers ="<<Tot;
    getch();
    return(0);
}
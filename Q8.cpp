/* 8. Write a C++ program to swap values of two int variables without using third variable. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int Num1,Num2;
    cout<<"Enter two numbers:->";
    cin>>Num1>>Num2;
    cout<<"**********Before Swap**********"<<endl<<"First Number= "<<Num1 <<endl<<"Second Number= "<<Num2;
    Num1=Num1+Num2;
    Num2=Num1-Num2;
    Num1=Num1-Num2;
    cout<<endl<<"**********After Swap**********"<<endl<<"First Number= "<<Num1<<endl<<"Second Number= "<<Num2;
    getch();
    return(0);

}
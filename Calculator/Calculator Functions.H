
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Add(int, int);
int Sub(int, int);
int Multiply(int, int);
int Division(int, int);
int Modulo(int, int);

int Add(int No1, int No2)
{
    int Sum = 0;

    Sum = No1 + No2;

    return Sum;
}

int Subtract(int No1, int No2)
{
    int Sub = 0;

    Sub = No1 - No2;

    return Sub;
}

int Multiply(int No1, int No2)
{
    int Mult = 0;

    Mult = No1 * No2;

    return Mult;
}

int Division(int No1, int No2)
{
    int Div = 0;

    Div = No1 / No2;

    return Div;
}

int Modulo(int No1, int No2)
{
    int Rem = 0;

    Rem = No1 % No2;

    return Rem;
}

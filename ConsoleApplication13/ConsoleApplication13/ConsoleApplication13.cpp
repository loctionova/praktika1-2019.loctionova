// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int Checking(float a, float b, float x1, float y1, float x2, float y2)
{
 int p1=0, p2=0,res=0;
 if (a*x1 + b >= y1)
  p1 = 1;
 if (a*x2 + b >= y2)
  p1 = 1;
 if (p2 != p1)
  res = 1;
 return res;
}
int main(void)
{
 setlocale(LC_ALL, "rus");
 int res;
 float a, b, x1, y1, x2, y2;
 printf("Введите коэфициенты a и b для y=ax+b - ");
 scanf_s("%f%f", &a, &b);
 do
{
 printf("Введите координаты первой точки(x,y) - ");
 scanf_s("%f%f", &x1, &y1);
 printf("Введите координаты второй точки(x,y) - ");
 scanf_s("%f%f", &x2, &y2);
 if (x1 == x2 && y2 == y1)
 {
  printf("Данный отрезое являеться точкой(Имеет длину 0)\n");
 }
}
while (x1 == x2 && y1 == y2);
 res= Checking (a, b, x1, y1, x2, y2);
 if (res == 1)
  printf("Заданный отрезок с заданной прямой пересекаеться\n");
 else
  printf("Заданный отрезок с заданной прямой не пересекаеться\n");
 system("pause");
 return 0;
}


//This program can solve the equation ax^2+bx+c = 0 using  the Quadratic formula
//a, b, c should be real numbers, a!=0
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main(void) {
  int a, b, c;
  int i;
  char input[2];

 printf("Program to solve ax^2+bx+c equations.\n");

  while (i=1, i>0){
    printf("(Note: Decimal numbers are rounded.)\n\n");
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if (a==0){
      printf("\nError: Number a cannot equal to 0");
      exit(1);
    }
    else{
      EqnCheck(a, b, c);
    }
    printf("\nEnter \"ok\" to clear: ");
    scanf("%s", &input);

    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    i++;
  }
  return 0;
}
#include <stdio.h>
#include <math.h>
#include "factor.h"

int gcd(int a, int b)
{
  int i;
  int hcf;
  a = abs(a);
  b = abs(b);

  for(i=1; i <= a && i <= b; ++i)
  {
    // Checks if i is factor of both integers
    if(a%i==0 && b%i==0){
      hcf = i;
    }
  }
  return hcf;
}

//Solving the equation. Formula link: "https://upload.wikimedia.org/wikipedia/commons/c/c4/Quadratic_formula.svg"
void solver(int a, int b, int c){
  int hcf = gcd(gcd(a, b), c);
  double sol1 = (-b-sqrt(pow(b, 2)-4*a*c))/(2*a);
  double sol2 = (-b+sqrt(pow(b, 2)-4*a*c))/(2*a);
  int i = 1;
  
  //Equations that has the same solution will be factored as (x+y)^2
  if (sol1 == sol2){
    printf("\nSolution: %.2lf\n", sol1);
    if (a<0&&c<0){
      printf("Factoring for this equation is not available due to glitches during development.");
    }
    else{
      factor_2(a, b, c, hcf);
    }
  }

  if (sol1 != sol2){ 
    printf("\nSolution 1: %.4lf\n", sol1);
    printf("Solution 2: %.4lf\n", sol2);
    if (fmod(sol1, i)==0.000 && fmod(sol2, i)!=0.000){
      factor(sol2, sol1, a);
      printf("\n\n(Note: Factoring might not be 100 percent accurate. It is better to try it out yourself.)\n");
    }
    if (fmod(sol1, i)!=0.000 && fmod(sol2, i)==0.000){
      factor(sol1, sol2, a);
      printf("\n\n(Note: Factoring might not be 100 percent accurate. It is better to try it out yourself.)\n");
    }
    if (fmod(sol1, i)==0.000 && fmod(sol2, i)==0.000){
      factor(sol1, sol2,a);
      printf("\n\n(Note: Factoring might not be 100 percent accurate. It is better to try it out yourself.)\n");
    }
    if (fmod(sol1, i)!=0 && fmod(sol2, i) !=0.000){
      printf("Unfortunately, we cannot factor this equation.");
    } 
  }
}

void EqnCheck(int a, int b, int c){
  if ((pow(b, 2)-4*a*c)<0){
    printf("We cannot find the solution for this equation.");
  }
  if (pow(b, 2)-4*a*c>0 || pow(b, 2)-4*a*c==0 ){
    solver(a, b, c);
  }
}

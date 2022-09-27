#include <stdio.h>
#include <math.h>

//Use to factor equations like x^2+3x+2 to (x+1)(x+2)
void factor(double a, double b, int c){ 
  if (c==1){
    if (a<0 && b<0){
      printf("The equation can be factored as (x+%.1lf)(x+%.1lf)", fabs(a), fabs(b));
    }
    
    if (a>0 && b>0){
      printf("The equation can be factored as (x-%.1lf)(x-%.1lf)", a, b);
      }
    
    if (a>0 && b<0){
      printf("The equation can be factored as (x-%.1lf)(x+%.1lf)", a, fabs(b));
    } 
    
    if (a<0 && b>0){
      printf("The equation can be factored as (x+%.1lf)(x-%.1lf)", fabs(a), b);
    }
  }

  if (c!=1&&c!=-1){
    if (a<0 && b<0){
      printf("The equation can be factored as (%dx+%.1lf)(x+%.1lf)", c, fabs(a)*c, fabs(b));
    }
    
    if (a>0 && b>0){
      printf("The equation can be factored as (%dx-%.1lf)(x-%.1lf)", c, a*c, b);
      }
    
    if (a>0 && b<0){
      printf("The equation can be factored as (%dx-%.1lf)(x+%.1lf)", c, a*c, fabs(b));
    } 
    
    if (a<0 && b>0){
      printf("The equation can be factored as (%dx+%.1lf)(x-%.1lf)",c, fabs(a)*c, b);
    }
  }
}

//Factor equations that has Solution 1 = Solution 2
//x^2+2x+1 to (x+1)^2
void factor_2(double a, int b, double c, int d){
  if (d==1){
    if (b>0){
      if (a==1){
        printf("The equation can be factored as (x+%.1lf)^2", sqrt(c));
      }
      if(a!=1&&c>0){
        printf("The equation can be factored as (%.1lfx+%.1lf)^2", sqrt(a), sqrt(c));
      }
    }
    if(b<0){
      if (a==1){
        printf("The equation can be factored as (x-%.1lf)^2", sqrt(fabs(c)));
      }
      if(a!=1&&c>0){
        printf("The equation can be factored as (%.1lfx-%.1lf)^2", sqrt(a), sqrt(c));
     }
    }
  }
  if (d!=1){
    double x = a/d;
    double y = c/d;
    if (b>0){
      if (x == 1){
        printf("The equation can be factored as %d(x+%.1lf)^2", d, sqrt(fabs(y)));
      }
      if (x!=1&&y>0){
        printf("The equation can be factored as %d(%.1lfx+%.1lf)^2", d, sqrt(x), sqrt(y));
      }
    }
    if (b<0){
      if (x == 1){
        printf("The equation can be factored as %d(x-%.1lf)^2", d, sqrt(fabs(y)));
      }
      if (x!=1&&y>0){
        printf("The equation can be factored as %d(%.1lfx-%.1lf)^2", d, sqrt(x), sqrt(y));
    }  
  }
  }
}

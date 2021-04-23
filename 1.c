#include <stdio.h>
#include <math.h>

  int main()
    {
      float a,b,x;
      scanf("%f%f%f", &a,&b,&x);
      if (a*b==x)
        printf("znacheniya a*b = %f\t", x);

      if(a*b>x)
      {
        printf("%f\t", a*b/x);
      }
      else
      {
        printf("%f\t", a*b-x);
      }
      return 0;
    }

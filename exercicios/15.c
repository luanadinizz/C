#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
   float c,f;
   printf("insira a temperatura em celsius");
   scanf("%f",&c),
   f=180*(c+32)/100;
   printf("a temperatura em fahrenheit e %f", f);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
int cat1,cat2,x,hip;
printf("insira o valor do cateto 1");
scanf("%d",&cat1);
printf("insira o valor do cateto 2");
scanf("%d",&cat2);
x=pow(cat1,2)+pow(cat2,2);
hip=sqrt(x);
printf(" a hipotenusa e %d",hip);
}

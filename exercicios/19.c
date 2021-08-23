#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void main()
{
  int alt,peso;
  printf("insira a sua altura:\n");
  scanf("%d",&alt);
  printf("insira seu peso:\n");
  scanf("%d",&peso);
  if(alt<120)
  {
      if(peso<=60)
        printf("voce esta no conceito A\n");
      else if(peso>=60&&peso<=90)
        printf("voce esta no conceito D\n");
      else
        printf("voce esta no conceito G\n");
  }
else if(alt>=120&&alt<=170)
{
    if(peso<=60)
        printf("voce esta no conceito B\n");
    else if(peso>=60&&peso<=90)
        printf("voce esta no conceito E\n");
    else
        printf("voce esta no conceito H\n");
}
else if(alt>170)
{
    if(peso<=60)
        printf("voce esta no conceito C\n");
    else if(peso>=60&&peso<=90)
        printf("voce esta no conceito F\n");
    else
        printf("voce esta no conceito I\n");
}
else
    printf("voce nao esta em nenhum conceito");
}

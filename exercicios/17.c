#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
   char alunoa[50],alunob[50],alunoc[50],alunod[50];
   float a,b,c,d;
   printf("digite o nome do aluno a:");
   scanf("%s",&alunoa);
   printf("digite o nome do aluno b:");
   scanf("%s",&alunob);
   printf("digite o nome do aluno c:");
   scanf("%s",&alunoc);
   printf("digite o nome do aluno d:");
   scanf("%s",&alunod);
   printf("digite a nota do aluno a:");
   scanf("%f",&a);
   printf("digite a nota do aluno b:");
   scanf("%f",&b);
   printf("digite a nota do aluno c:");
   scanf("%f",&c);
   printf("digite a nota do aluno d:");
   scanf("%f",&d);
   printf("nome:%s\t",alunoa);printf("nota:%.2f\n",a);
   printf("nome:%s\t",alunob);printf("nota:%.2f\n",b);
   printf("nome:%s\t",alunoc);printf("nota:%.2f\n",c);
   printf("nome:%s\t",alunod);printf("nota:%.2f\n",d);
}

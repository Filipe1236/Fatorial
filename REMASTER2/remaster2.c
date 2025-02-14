#include "fatorial.h"
#include <stdio.h>

int main(){
    int n;
    printf("Calcular fatorial de:");
    scanf("%d",&n);
    if(fatorial(n)==0){printf("Não há fatoriais negativos!");}
    else{
    printf("O valor de %d! vai ser %d\n",n,fatorial(n));}
    }
#include <stdio.h>
//a função fatorial está a funcionar bem!
int fatorial (int n){
    int resultado=n;
    while(n>1){
        resultado=resultado*(n-1);
        n=n-1;
    };
    return resultado;
}


//Remasterizar para o n depender do input do utilizador!
int main(){
    int final,n;
    n=6;
    final=fatorial(n);
    printf("O resultado de %d! é %d\n",n,final);
}
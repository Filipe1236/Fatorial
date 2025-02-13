#include <stdio.h>
//a função do fatorial estava mal, corrigi-a!
int fatorial(int n){
    int resultado=n;
    while(n>1){
        resultado=resultado * (n-1);
        n=n-1;
    }
    if(n==0)
    {resultado=1;}
    return resultado;
}
//o getchar não é bom para situações destas! Ele ainda por cima vai fazer fatorial do valor ASCCI de TODOS os chars, incluindo o próprio enter, daí aparecer algo muito estranho!

//este só funciona para inputs de 0 a 9, dá para melhorar MUITO isto!
int main(){
    int n;
    #define LINEFEED 10 //char inserido pelo enter
    #define ASCCIOFFSET 48//diferença entre o valor ascci e valor real dos números inseridos
    //n=52;
    //printf("O valor de %d! vai ser %d\n",n-48,fatorial(n-48));
    //printf("%d\n",fatorial(4)); //linhas de teste
    while((n=getchar())!=EOF){
        if(n==LINEFEED){printf("\n");}
    else{printf("O valor de %d! vai ser %d",n-ASCCIOFFSET,fatorial(n-ASCCIOFFSET));}
    }
}
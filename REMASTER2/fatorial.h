//função que calcula n! (fatorial)
//dá return 0 a inteiros negativos. 0!=1 por convenção
int fatorial(int n){
    int resultado=n;
    //caso do 0! (exceção à regra):
    if(n==0){return 1;}
    //caso de fatoriais "negativos" (não existem), daí vou convencionar que o resultado vai dar 0 (input inválido)
    if (n<0){return 0;}
    else{
        int resultado=n;
        while (n>2){
            resultado=resultado * (n-1);
            n=n-1;
        }
        return resultado;
    }
}
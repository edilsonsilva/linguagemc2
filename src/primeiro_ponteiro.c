#include <stdio.h>

int main(){
    int valor = 30;
    int *pvalor = &valor;
    printf("Valor da variável é %d e o endereço de memória é %p\n",valor, &valor);
    printf("O endereço de pvalor é %p e o valor é %d\n",pvalor,*pvalor);
    int x = 0;

    return 0;
}
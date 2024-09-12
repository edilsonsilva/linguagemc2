#include <stdio.h>

int main(){
    float num;
    printf("Digite um número:\n");
    scanf("%f",&num);
    if(num % 2 == 0){
        printf("O número digitado é Par");
    }
    else{
        printf("O número digitado é Impar");
    }
    return 0;
}
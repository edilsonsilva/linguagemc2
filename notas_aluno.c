#include <stdio.h>

int main(){
    float nota1,nota2,nota3,nota4,media;

    printf("Digite a primeira nota e tecle enter: \n");
    scanf("%f",&nota1);
    
    printf("Digite a segunda nota e tecle enter: \n");
    scanf("%f",&nota2);
    
    printf("Digite a terceira nota e tecle enter: \n");
    scanf("%f",&nota3);
    
    printf("Digite a quarta nota e tecle enter: \n");
    scanf("%f",&nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if(media >= 6){
        printf("A nota média do aluno é %.2f e está aprovado\n",media);
    }
    else{
        printf("A nota média do aluno é %.2f e está reprovado\n",media);
    }
    
}
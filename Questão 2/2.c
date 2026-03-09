/*RESPOSTA Questão 2*/



#include <stdio.h>

    int main(){
    float nota1;
    float nota2;
    float nota3;
    float notafinal;

        printf("digite a primeira nota do aluno: \n");
        scanf("%f", &nota1);

        printf("digite a segunda nota do aluno: \n");
        scanf("%f", &nota2);

        printf("digite a terceira nota do aluno: \n");
        scanf("%f", &nota3);

    

    notafinal = (nota1 + nota2 + nota3)/3;


    printf("Nota final do aluno: %.2f\n", notafinal);
        if (notafinal >=7)
        {
        printf("Aluno aprovado com %.2f\n", notafinal);
        }
        else {
            printf("Aluno reprovado com %.2f\n", notafinal);
        }
    
    

return 0;
}
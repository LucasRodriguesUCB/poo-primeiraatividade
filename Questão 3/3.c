/*
RESPOSTA Questão 3: 

A saida esperada seria 0.0 com os valores de a = 5 e b = 11, nas condições de a ser maior que b
ou negação de a ser maior que 0. Todavia, o código veio com scanf, então quando compilado, solicita a inserção
de outros números.*/





#include <stdio.h>

int main() {
int a = 5;
int b = 11;
float c;

scanf("%d %d", &a, &b);

if(a > b || !(a > 0)) {
c = (float)(b / a);
} else {
c = (float)(a / b);
}
printf("%.2f\n", c);
return 0;
}
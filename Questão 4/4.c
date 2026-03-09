/*
RESPOSTA Questão 4:

O resultado do trecho de código é igual a 16 quando compilado*/



#include <stdio.h>

int main() {
int y = 5;
int z = 11;
int w;

w = y + z;
if (y > z) {
w = y * z;
}

printf("%d", w);
return 0;
}

/*RESPOSTA Questão 6

a) Qual a saída do programa acima?
    A saída esperada foi da contagem numérica com o while de 0 a 9, que enquanto o número fosse menor que 10, 
    continuaria contando, quando chegou ao 10 executou o do while.


b) Qual a diferença entre o while e do do..while?
    A diferença entre esses dois laços de repetição, é que o while primerio verifica e depois executa, enquanto o do vai fazer a
    execução do comando pra depois verificar.

c) Como fica a implementaçao do bloco
    O comando do while fica
    while (condição desejada) { 
    printf("...\n" variavel)
    }
    
    e o do... while fica: 
    do {
    printf("...\n", variavel);
    i++;
    } while (condição desejada);

d) Qual a diferença entre while e for? Quando usar um ou outro?
    A diferença entre os dois é que o for possui um inicio definido, a condição desejada e tembém o incremento (++), 
    O for é mais usado quando sabemos quantas vezes o laço será executado, e o while é usado quando não sabemos quantas
    repetições terão e o programa continuará executando a condição desejada.

*/





#include <stdio.h> 

int main() {
int i;

i = 0;

while (i < 10) {
printf("while: %d\n", i);
i++;
}

do {
printf("do: %d\n", i);
i++;
} while (i < 10);

return 0;
}